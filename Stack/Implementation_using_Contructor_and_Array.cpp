#include <iostream>
using namespace std;

struct Stack
{
    int top;
    int *arr;
    int total_elements;

    Stack(int n)
    {
        total_elements = n;
        top = -1;
        arr = new int[total_elements];
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(int value)
    {
        if (top == total_elements - 1)
        {
            cout << "Stack Overflow";
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    void pop(struct Stack s)
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
        }
        else
        {
            top--;
        }
    }

    void peek(struct Stack s)
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
        }
        else
        {
            cout << arr[top];
        }
    }

    void size(struct Stack s)
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
        }
        else
        {
            cout << "total_elements of Stack is " << total_elements;
        }
    }
};
int main()
{
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop(s);
    s.pop(s);
    s.peek(s);
    cout << endl;
    s.size(s);

    return 0;
}