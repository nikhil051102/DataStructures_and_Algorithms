#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void InsertNode(Node*head, int value)
{
    struct Node*ptr = head;
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    if (n==NULL)
    {
        cout<<"Memory Full";
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        n->data = value;
        n->next = NULL;
        ptr->next = n;
    }
}


int main()
{
    struct Node*Head = (struct Node*)malloc(sizeof(struct Node));
    Head->data = 100;
    Head->next = NULL;

    InsertNode(Head, 200);
    InsertNode(Head, 300);
    InsertNode(Head, 400);
    InsertNode(Head, 500);

    Traversal(Head);
    return 0;
}