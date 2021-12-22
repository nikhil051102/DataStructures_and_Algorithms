#include <iostream>
using namespace std;

// Problem Link : https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1 s

struct Node
{
    int data;
    struct Node*next;
};

struct Node*Traversal(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
    cout<<ptr->data<<endl;
    return ptr;
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

void Reverse_Nodes(Node*head, int n)
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

    struct Node* Last_Node_of_Previous_List = Traversal(previous);
    Last_Node_of_Previous_List->next = nextHead;
    Reverse_Nodes(nextHead, n);
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

    Reverse_Nodes(head, n);
    return 0;
}