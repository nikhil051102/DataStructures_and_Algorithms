#include <iostream>
using namespace std;

struct Node
{
    int number;
    struct Node*next;
};

struct Node *push(struct Node*ptr, int value)
{
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));
    n->number = value;
    n->next = ptr;
    ptr = n;
    return ptr;
}

void LinkedListTraversal(struct Node*ptr)
{
    while (ptr != NULL)
    {
        cout<<"Element is "<<ptr->number<<endl;
        ptr = ptr->next;
    }
}

int peek(struct Node*s, int position)
{
    struct Node*ptr = s;
    for (int i = 0; (i<position-1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->number;
    }
    else
        return -1;
}

int stackTop(struct Node*s)
{
    return s->number;
}

int stackBottom(struct Node*s)
{
    int position = 0;
    struct Node*ptr = s;
    while (ptr!=NULL)
    {
        ptr = ptr->next;
        position++;
    }
    return position;
}

int main()
{
    struct Node * s;
    s = push(s, 1000);
    s = push(s, 2000);
    s = push(s, 3000);
    s = push(s, 4000);
    s = push(s, 5000);
    LinkedListTraversal(s);
    cout<<peek(s, 3)<<endl;
    cout<<stackTop(s)<<endl;
    cout<<stackBottom(s)<<endl;
    return 0;
}