#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *array;
};

struct Stack*push(struct Stack*ptr, char value)
{
    ptr->top++;
    ptr->array[ptr->top] = value;
}

void Traversal(struct Stack*ptr, int n)
{
    for (int j = n-1; j >= 0; j--)
    {
        cout<<ptr->array[j];
    }
}

int main()
{
    int n;
    cout<<"Number of Characters in String : ";
    cin>>n;

    char line[n];
    cout<<"Input String : ";
    cin>>line;

    struct Stack*s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size = n;
    s->top = -1;
    s->array = (char *)malloc(s->size*sizeof(char));

    for (int i = 0; i < n; i++)
    {
        push(s, line[i]);
    }

    Traversal(s, n);
    return 0;
}