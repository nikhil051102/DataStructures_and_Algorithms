#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *array;
};
//Arrow Operator(->) : Dereferancing ke baad '.' operator laga deta hai.
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
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    //1. Push Method
    struct Stack *s;
    s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->array = (int *)malloc(s->size*sizeof(int));

    if (isFull(s))
    {
        s->top++;
        s->array[s->top] = 5;
    }
    

    //2. Pop/Push Method

    if(isEmpty(s))
    {
        cout<<"Stack Underflow";
        return -1; 
    }
    else
    {
        int val = s->array[s->top];
        s->top--;
        return val; 
    }
    return 0;
}