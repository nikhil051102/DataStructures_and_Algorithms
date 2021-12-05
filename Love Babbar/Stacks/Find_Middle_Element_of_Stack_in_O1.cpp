#include <iostream>
using namespace std;

// Problem Link : https://www.geeksforgeeks.org/design-a-stack-with-find-middle-operation/

struct Node
{
    struct Node*previous;
    int data;
    struct Node*next;
};

struct Node *Push(struct Node*Top, int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->previous = Top;
    n->next = Top;
    return n;
}

void ListTraversal(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
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
    struct Node*Top = (struct Node*)malloc(sizeof(struct Node));
    Top = Push(Top, 100);
    Top = Push(Top, 200);
    Top = Push(Top, 300);

    ListTraversal(Top);
    return 0;
}