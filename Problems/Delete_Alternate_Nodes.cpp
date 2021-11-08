#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void AddNode(struct Node *head, int value)
{
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = value;
    n->next = NULL;
    ptr->next = n;
}

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void deleteAlt(struct Node *head)
{
    struct Node *ptr1 = head;
    while (ptr1->next != NULL)
    {
        Node *ptr2 = ptr1->next;
        ptr1->next = ptr2->next;
        free(ptr2);
        if (ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
        }
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    AddNode(head, 20);
    AddNode(head, 30);
    AddNode(head, 40);
    AddNode(head, 50);
    AddNode(head, 60);

    Traversal(head);
    cout << endl
         << endl;
    deleteAlt(head);
    Traversal(head);

    return 0;
}