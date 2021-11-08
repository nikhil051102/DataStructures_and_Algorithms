#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
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

int main()
{
    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    head1->data = 9;
    head1->next = NULL;

    AddNode(head1, 6);
    AddNode(head1, 4);
    AddNode(head1, 2);
    AddNode(head1, 3);
    AddNode(head1, 8);

    struct Node *head2 = (struct Node*)malloc(sizeof(struct Node));
    head2->data = 1;
    head2->next = NULL;

    AddNode(head2, 2);
    AddNode(head2, 8);
    AddNode(head2, 6);
    AddNode(head2, 2);

    Traversal(head1);
    cout<<endl<<endl;
    Traversal(head2);
    return 0;
}