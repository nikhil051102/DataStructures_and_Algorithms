#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
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

void Traversal(Node*head)
{
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main()
{
    Node *Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = 12;
    Head->next = NULL;

    CreateNode(Head, 15);
    CreateNode(Head, 10);
    CreateNode(Head, 11);
    CreateNode(Head, 5);
    CreateNode(Head, 6);
    CreateNode(Head, 2);
    CreateNode(Head, 3);

    struct Node*ptr = Head;
    struct Node*Head2 = (struct Node*)malloc(sizeof(struct Node));
    if (ptr->next->data > ptr->data)
    {
        Head2->data = ptr->next->data;
        Head2->next = NULL;
    }
    else
    {
        Head2->data = ptr->data;
        Head2->next = ptr->next;
    }
    ptr = ptr->next;
    // 15, 11, 6, 3
    
    
    while (ptr->next != NULL)
    {
        if(ptr->next->data > ptr->data)
        {
            CreateNode(Head2, ptr->next->data);
        }
        ptr = ptr->next;
    }
    
    Traversal(Head);
    cout<<endl;
    Traversal(Head2);
    return 0;
}