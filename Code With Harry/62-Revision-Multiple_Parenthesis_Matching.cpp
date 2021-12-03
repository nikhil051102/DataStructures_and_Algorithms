#include <iostream>
using namespace std;

struct Stack
{
    char *data;
    int top;
    int size;
};


int isEmpty(Stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Push(Stack *s, char c)
{
    s->top++;
    s->data[s->top] = c;
}

void Pop(Stack *s)
{
    s->top--;
}

int main()
{
    int n;
    cout << "How many character do you want to input : ";
    cin >> n;

    char character[n];
    cout << "Input Characters : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> character[i];
    }

    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = n;
    s->top = -1;
    s->data = (char *)malloc(s->size * sizeof(char));

    for (int j = 0; j < n; j++)
    {
        if (character[j] == '{' or character[j] == '[' or character[j] == '(')
        {
            Push(s, character[j]);
        }
        else if (character[j] == '}')
        {
            if (s->data[s->top] == '{')
            {
                Pop(s);
            }
        }
        else if (character[j] == ']')
        {
            if (s->data[s->top] == '[')
            {
                Pop(s);
            }
        }
        else if (character[j] == ')')
        {
            if (s->data[s->top] == '(')
            {
                Pop(s);
            }
        }
    }

    if (isEmpty(s))
    {
        cout << "Operation Successful" << endl;
    }
    else if (s->top < -1)
    {
        cout << "Stack Underflow by " << (s->top - (-1)) << endl;
    }
    else if (s->top > -1)
    {
        cout << "Stack Overflow by " << (s->top - (-1)) << endl;
    }
    return 0;
}