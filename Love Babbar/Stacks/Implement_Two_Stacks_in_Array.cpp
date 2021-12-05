#include <iostream>
using namespace std;

//Video : https://youtu.be/TiYif1O1NTc

struct Stack
{
    int size;
    int top;
    int *array;
};

int isEmpty(struct Stack*s)
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

int isFull(struct Stack*s)
{
    if (s->top == s->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Push(struct Stack*s, int data)
{
    if (isFull(s))
    {
        cout<<"Cannot Push Element as Stack is Full";
    }
    else
    {
        s->top++;
        s->array[s->top] = data;
    }
}

void Pop(struct Stack*s)
{
    if (isEmpty(s))
    {
        cout<<"Cannot Pop Element as Stack is Empty";
    }
    else
    {
        s->top--;
    }
}

int main()
{
    int n;
    cout<<"Length of Array : ";
    cin>>n;

    int elements[n];
    cout<<"Enter Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>elements[i];
    }
    
    //Simple Order Inserted Numbers
    struct Stack*s1;
    s1 = (struct Stack*)malloc(sizeof(struct Stack));
    s1->top = -1;
    s1->size = n;
    s1->array = (int *)malloc(sizeof(int));

    //Reverse Order Inserted Numbers
    struct Stack*s2;
    s2 = (struct Stack*)malloc(sizeof(struct Stack));
    s2->top = -1;
    s2->size = n;
    s2->array = (int *)malloc(sizeof(int));

    //We will implement one array in two stacks using elements of array in Simple order and Reverse order

    //Simple Order Insertion of Array Elements
    for (int j = 0; j < n; j++)
    {
        Push(s1, elements[j]);
    }
    

    //Reverse Order Insertion of Array Elements
    for (int k = n-1; k >= 0; k--)
    {
        Push(s2, elements[k]);
    }
    
    cout<<endl<<"Top Element of Stack 1 : "<<s1->array[s1->top];
    cout<<endl<<"Top Element of Stack 2 : "<<s2->array[s2->top];
    return 0;
}