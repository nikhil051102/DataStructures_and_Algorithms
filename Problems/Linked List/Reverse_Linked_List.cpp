#include <iostream>
using namespace std;

// Problem Statement : https://youtu.be/9t_IcqgsJdQ

struct Node
{
    int data;
    struct Node *next;
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

void push(struct Node *head, int value)
{
    struct Node *ptr = head; // Pointer pointing to head
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = value;
    n->next = NULL;
    ptr->next = n;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 100;
    head->next = NULL;
    push(head, 200);
    push(head, 300);
    push(head, 400);
    push(head, 500);

    cout<<"Original Linked List : "<<endl;
    Traversal(head);

    // 1) Iterative Approach
    struct Node *previous = NULL;
    struct Node *current = head;
    struct Node *nxt = NULL;

    while (current != NULL)
    {
        nxt = current->next;
        current->next = previous;
        previous = current;
        current = nxt;
    }

    cout<<endl<<"Reversed Linked List : "<<endl;
    Traversal(previous);

    return 0;
}