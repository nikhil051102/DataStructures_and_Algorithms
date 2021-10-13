#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *array;
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
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct Stack *ptr,int value)
{
    ptr->top++;
    ptr->array[ptr->top]=value;
}


int peek(struct Stack *ptr, int i)
{
    if(isEmpty(ptr))
    {
        return -1;
    }
    else
    {   
        int arrayindex=ptr->top-i+1;
        return ptr->array[arrayindex];
    }
}

int main()
{
    struct Stack *s;
    s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->array = (int *)malloc(s->size*sizeof(int));

    push(s,899);
    push(s,9);
    push(s,13);
    push(s,65);


    for(int j=1;j<=s->top+1;j++)
    {
        cout<<peek(s,j)<<endl;
    }
    return 0;
}