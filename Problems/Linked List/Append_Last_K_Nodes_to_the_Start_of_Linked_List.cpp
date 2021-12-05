#include <iostream>
using namespace std;

//Problem Statement : https://youtu.be/v6g1g4lNowM
struct Node
{
    int data;
    struct Node*next;
};

struct Node* Insert(struct Node*ptr, int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->next = ptr;
    ptr = n;
    return n;
}

int LinkedListTraversal(struct Node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
    return count;
}

//We will break first (Number of Nodes - k) nodes from linked list by pointing last node to NULL
struct Node* Breaking_Nodes(struct Node*ptr, int x)
{
    for (int i = 0; i < x-1; i++)
    {
        ptr = ptr->next;
    }
    struct Node*n = ptr->next;
    ptr->next = NULL;
    return n;
}

void Appending_Node(struct Node*ptr1, struct Node*ptr2, int k)
{
    for (int i = 0; i < k-1; i++)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1;
    // struct Node*n = ptr2;
    // return n;
}

int main()
{
    int k = 2;
    struct Node*s;
    s = Insert(s, 1000);
    s = Insert(s, 2000);
    s = Insert(s, 3000);
    s = Insert(s, 4000);
    s = Insert(s, 5000);

    int total_nodes = (LinkedListTraversal(s));
    cout<<endl<<endl<<endl;
    struct Node*n = Breaking_Nodes(s, total_nodes-k);
    cout<<LinkedListTraversal(s)<<endl;
    cout<<LinkedListTraversal(n)<<endl;
    Appending_Node(s, n, k);
    cout<<LinkedListTraversal(n);
    return 0;
}