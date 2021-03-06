#include <iostream>
using namespace std;

// Problem Link : https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1 s

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

void createNode(struct Node*head, int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    n->data = value;
    n->next = NULL;
    ptr->next = n;
}

struct Node*Reverse_Nodes(Node*head, int n)
{
    // struct Node*ptr = head;

    struct Node*previous = NULL;
    struct Node*current = head;
    struct Node*agla = NULL;

    struct Node*nextHead = NULL;  // To save pointer of next n sized Linked List.
    
    int i = 0;
    while(i<n and current != NULL)   //used to current != NULL for last loop to reverse
    {
        nextHead = current->next;
        agla = current->next;
        current->next = previous;
        previous = current;
        current = agla;
        i++;
    }
    if(nextHead != NULL)
    {
        head->next = Reverse_Nodes(nextHead, n);
    }
    return previous;
}

int main()
{ 
    struct Node*head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    createNode(head, 2);
    createNode(head, 2);
    createNode(head, 4);
    createNode(head, 5);
    createNode(head, 6);
    createNode(head, 7);
    createNode(head, 8); 

    int n;
    cout<<"Value of n : ";
    cin>>n;

    struct Node*node = Reverse_Nodes(head, n);
    Traversal(node);
    return 0;
}