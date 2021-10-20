#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *array;
};

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Stack *ptr)
{
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct Stack *ptr, char s)
{
    if (isFull(ptr))
    {
        cout << "Stack Overflow " << endl;
    }
    else
    {
        ptr->top++;
        ptr->array[ptr->top] = s;
    }
}

void pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "Stack Underflow " << endl;
    }
    else
    {
        ptr->top--;
    }
}

int main()
{
    int n;
    cout << "Number of Characters in Input : ";
    cin >> n;

    char input[n];
    cout << "Enter Characters one by one :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = n;
    s->top = -1;
    s->array = (char *)malloc(s->size * sizeof(char));

    for (int j = 0; j < n; j++)
    {
        if (input[j] == '{' or input[j] == '[' or input[j] == '(')
        {
            push(s, input[j]);
        }
        else if (input[j] == '}')
        {
            if (s->array[s->top] == '{')
            {
                pop(s);
            }
        }
        else if (input[j] == ']')
        {
            if (s->array[s->top] == '[')
            {
                pop(s);
            }
        }
        else if (input[j] == ')')
        {
            if (s->array[s->top] == '(')
            {
                pop(s);
            }
        }
    }

    if (isEmpty(s))
    {
        cout << "Balanced Statement";
    }
    else
    {
        cout << "Unbalanced Statement";
    }
    return 0;
}