#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

void CreateNode(struct Node *Head, int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = Head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->data = value;
    n->next = NULL;
}

int main()
{
    Node *Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = 1;
    Head->next = NULL;

    CreateNode(Head, 2);
    CreateNode(Head, 3);
    CreateNode(Head, 4);
    CreateNode(Head, 5);
    
    Node *ptr= Head;
    if(Head==NULL || Head->next==Head) 
    {
        cout<<"Circular List";
    }
    
    while(ptr)
    {
        if(ptr->next==Head) 
        {
            cout<<"Circular List";
        }
        ptr=ptr->next;
    }
    cout<<"Linked List";
    return 0;
}