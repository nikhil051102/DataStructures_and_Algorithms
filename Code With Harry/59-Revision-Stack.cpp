#include <iostream>
using namespace std;

//Arrays 
struct Stack
{
    int number_of_elements;
    int *array;
    int top;
};

void Insertion_in_Stack(struct Stack*s, int data)
{
    s->top++;
    s->array[s->top] = data;
}

int isFull(struct Stack*s)
{
    if (s->top== s->number_of_elements-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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

void Push(struct Stack*s, int element)
{
    if(isFull(s))
    {
        cout<<"Cannot Push Element as Stack is Full";
    }
    else
    {
        s->top++;
        s->array[s->top] = element;
    }
}

void Pop(struct Stack*s)
{
    if (isEmpty(s))
    {
        cout<<"Cannot Pop element as Stack is Empty";
    }
    else
    {
        s->top--;
    }
}

int main()
{
    struct Stack *s;
    s = (struct Stack*)malloc(sizeof(Stack));
    s->number_of_elements = 6;
    s->array = (int *)malloc(s->number_of_elements*sizeof(int));
    s->top = -1;

    int n;
    cout<<"How many elements you want to input = ";
    cin>>n;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin>>element;
        Insertion_in_Stack(s, element);
    }
    
    Push(s, 50);
    Pop(s);

    return 0;
}