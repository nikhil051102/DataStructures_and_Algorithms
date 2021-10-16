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

void push(struct Stack *ptr, char value)
{
    ptr->top++;
    ptr->array[ptr->top] = value;
}

void pop(struct Stack *ptr)
{
    ptr->top--;
}


int main()
{
    int n;
    cout << "Number of Elements to be Stored : ";
    cin >> n;

    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = n;
    s->top = -1;
    s->array = (char *)malloc(s->size * sizeof(char));

    cout << "Enter Characters : ";
    char array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (array[j] == '(')
        {
            push(s, array[j]);
        }
        else if (array[j] == ')')
        {
            pop(s);
        }
    }

    if (isEmpty(s))
    {
        cout<<"Operation Successful"<<endl;
    }
    else if (s->top <-1)
    {
        cout<<"Stack Underflow by "<<(s->top - (-1))<<endl;
    }
    else if (s->top > -1)
    {
        cout<<"Stack Overflow by "<<(s->top -(-1))<<endl;
    }
    return 0;
}
