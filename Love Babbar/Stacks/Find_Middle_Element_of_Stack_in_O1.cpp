#include <iostream>
using namespace std;

// Problem Link : https://www.geeksforgeeks.org/design-a-stack-with-find-middle-operation/ 

struct Stack
{
    int top;
    struct Node;
};

struct Node
{
    struct Node*previous;
    int data;
    struct Node*next;
};

void Push(int element)
{
    CreateNode(element);
}

void CreateNode(int element)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->previous = NULL;
    n->data = element;
    n->next = NULL;
}
// int FindMiddle(struct Stack*s)
// {
//     int x;
//     if ((s->top+1)%2 == 0)
//     {
//         x = (s->top)/2 + 1;
//         return s->array[x];
//     }
//     else
//     {
//         x = (s->top)/2;
//         return s->array[x];
//     }
// }

int main()
{
    struct Stack*s = (struct Stack*)malloc(sizeof(struct Stack));
    s->top = -1;
    return 0;
}