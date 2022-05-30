#include<iostream>
using namespace std;

struct Stack {
    int *arr;
    int size;
    int top;
};

int isEmpty(struct Stack*s) {
    if(s->top == -1) {
        return 1;
    } else {return 0;}
}

void push(struct Stack*s, int value) {
    if(s->top == s->size - 1) {
        cout<<"Stack Overflow";
    } else {
        s->top++;
        s->arr[s->top] = value;
    }
}

void pop(struct Stack*s) {
    if(s->top == -1) {
        cout<<"Stack Underflow";
    } else {
        s->top--;
    }
}

void peek(struct Stack*s) {
    if (s->top == -1)
    {
        cout<<"Stack Underflow";
    } else {
        cout<<s->arr[s->top];
    }
}

void size(struct Stack*s) {
    if(s->top == -1) {
        cout<<"Stack Underflow";
    } else {
        cout<<"Size of Stack is "<<s->size;
    }
}

int main()
{
    struct Stack*s = (struct Stack*)malloc(sizeof(struct Stack));
    s->top = -1;
    s->size = 10;
    s->arr = (int *)malloc(s->size*sizeof(int));

    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    pop(s);
    pop(s);
    peek(s);
    size(s);
    return 0;
}