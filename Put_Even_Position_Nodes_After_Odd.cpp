#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*address;
};

struct Node* Insert(struct Node*head, struct Node*ptr, int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->address = ptr->address;
    ptr->address = n;
    return head;
}

int LinkedListTraversal(struct Node*ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->address;
        count++;
    }
    return count;
}

struct Node*Answer(struct Node*ptr)
{
    struct Node*odd = ptr;
    struct Node*even = ptr->address;

    while (odd != NULL or even != NULL)
    {
        odd->address = even->address;
        even->address = odd->address;
    }
    odd->address = even;

    return odd;
}

int main()
{
    struct Node*head = (struct Node*)malloc(sizeof(struct Node));
    struct Node*second = (struct Node*)malloc(sizeof(struct Node));
    struct Node*third = (struct Node*)malloc(sizeof(struct Node));
    struct Node*fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node*fifth = (struct Node*)malloc(sizeof(struct Node));
    struct Node*sixth = (struct Node*)malloc(sizeof(struct Node));

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

    int n = LinkedListTraversal(head);
    struct Node*newNode = Answer(head);

    LinkedListTraversal(newNode);
    return 0;
}