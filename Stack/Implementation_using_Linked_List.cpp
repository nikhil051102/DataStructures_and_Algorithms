#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct MyStack
{
    struct Node *head;
    int size;
    MyStack()
    {
        head = NULL;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "Stack Underflow";
            return 0;
        }
        else
        {
            int x = head->data;
            struct Node *temp = head;
            head = head->next;
            free(temp);
            size--;
            return x;
        }
    }

    int total_nodes() { return size; }

    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty";
            return 0;
        }
        else
        {
            return head->data;
        }
    }
};

int main()
{
    MyStack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    cout<<"Popped Element : "<<s.pop()<<endl;
    cout<<"Top Element : "<<s.peek()<<endl;
    cout<<"Total Nodes : "<<s.total_nodes();
    return 0;
}