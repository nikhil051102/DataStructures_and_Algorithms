#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *address;
};

struct Node *Insert(struct Node *head, struct Node *ptr, int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = value;
    n->address = ptr->address;
    ptr->address = n;
    return head;
}

int LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->address;
    }
}

void Answer(struct Node *ptr)
{
    struct Node *odd = ptr;
    struct Node *even = ptr->address;
    struct Node *evenStart = even;

    while (odd->address != NULL && even->address != NULL)
    {
        odd->address = even->address;
        odd = odd->address;
        even->address = odd->address;
        even = even->address;
    }
    odd->address = evenStart;
    if (odd->address != NULL)
    {
        even->address = NULL;
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->address = second;

    second->data = 2;
    second->address = third;

    third->data = 3;
    third->address = fourth;

    fourth->data = 4;
    fourth->address = fifth;

    fifth->data = 5;
    fifth->address = sixth;

    sixth->data = 6;
    sixth->address = NULL;

    LinkedListTraversal(head);
    Answer(head);
    cout << endl;
    LinkedListTraversal(head);
    return 0;
}