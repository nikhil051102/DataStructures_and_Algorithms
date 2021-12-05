#include <iostream>
using namespace std;

// Problem Statement : https://youtu.be/n5_9DMCX0Yk

struct Node
{
    int data;
    struct Node *address;
};

void Traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->address;
    }
}

struct Node *Insert_Node(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->address != NULL)
    {
        p = p->address;
    }
    p->address = ptr;
    ptr->address = NULL;
    return head;
}

struct Node *Merge_Node(Node *head1, Node *head2)
{
    struct Node *ptr1 = head1;
    struct Node *ptr2 = head2;
    struct Node *DummyNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *ptr3 = DummyNode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->address = ptr1;
            ptr1 = ptr1->address;
        }
        else
        {
            ptr3->address = ptr2;
            ptr2 = ptr2->address;
        }
        ptr3 = ptr3->address;
    }

    while (ptr1 != NULL)
    {
        ptr3->address = ptr1;
        ptr1 = ptr1->address;
        ptr3 = ptr3->address;
    }
    while (ptr2 != NULL)
    {
        ptr3->address = ptr2;
        ptr2 = ptr2->address;
        ptr3 = ptr3->address;
    }

    return DummyNode->address;
}
 
int main()
{
    struct Node *Node1_1 = (struct Node *)malloc(sizeof(struct Node));
    Node1_1->data = 1;
    Node1_1->address = NULL;
    Insert_Node(Node1_1, 4);
    Insert_Node(Node1_1, 5);
    Insert_Node(Node1_1, 7);

    struct Node *Node1_2 = (struct Node *)malloc(sizeof(struct Node));
    Node1_2->data = 2;
    Node1_2->address = NULL;
    Insert_Node(Node1_2, 3);
    Insert_Node(Node1_2, 6);

    Traversal(Node1_1);
    cout<<endl;
    Traversal(Node1_2);
    cout<<endl;

    struct Node *x = Merge_Node(Node1_1, Node1_2);
    Traversal(x);
    return 0;
}