#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *array;
};

//To check whether Stack is full.
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

//To check whether Stack is Empty.
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
    //Here we are pointing to data directly.
    // struct Stack s;
    // s.size = 80;
    // s.top = -1;
    // s.array = (int *)malloc(s.size*sizeof(int));

    //Here, We are pointing stack with Pointer.
    struct Stack *s;
    s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size = 80;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));

    // Check Stack is Empty or not
    if (isEmpty(s))
    {
        cout << "This Stack is Empty";
    }
    else
    {
        cout << "This Stack is not Empty";
    }
    return 0;
}

//Important Points
// 1.We can't pop elements from empty stack.
// 2.We can't push elements to full stack.