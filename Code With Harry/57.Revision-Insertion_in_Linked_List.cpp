#include <iostream>
using namespace std;

struct Node
{
    struct Node *next;
    int data;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void AddNode(struct Node *ptr, int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->data = value;
    n->next = NULL;
}

void DeleteLastNode(struct Node *ptr)
{
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *deleteNode = ptr->next;
    free(deleteNode);
    ptr->next = NULL;
}

void DeleteNodeAtIndex(struct Node *ptr, int index)
{
    for (int i = 0; i < index - 2; i++)
    {
        if (ptr->next == NULL)
        {
            cout << "Index out of Range !" << endl;
            break;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    struct Node *Next = ptr->next->next;
    struct Node *DeletingNode = ptr->next;
    ptr->next = Next;
    free(DeletingNode);
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = NULL;

    AddNode(head, 200);
    AddNode(head, 300);
    AddNode(head, 400);
    AddNode(head, 500);
    AddNode(head, 600);
    AddNode(head, 700);
    AddNode(head, 800);
    AddNode(head, 900);
    AddNode(head, 1000);
    AddNode(head, 1100);

    DeleteLastNode(head);
    DeleteNodeAtIndex(head, 5);
    Traversal(head);
    return 0;
}