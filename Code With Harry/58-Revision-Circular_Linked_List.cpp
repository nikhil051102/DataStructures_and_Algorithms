#include <iostream>
using namespace std;

struct Node
{
    struct Node *next;
    int data;
};

void InsertNodeAtLast(struct Node *head, int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    n = ptr->next;
    n->data = value;
    n->next = head;
}

void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = first;

    first->data = 200;
    first->next = second;

    second->data = 300;
    second->next = head;

    Traversal(head);
    InsertNodeAtLast(head, 400);
    return 0;
}