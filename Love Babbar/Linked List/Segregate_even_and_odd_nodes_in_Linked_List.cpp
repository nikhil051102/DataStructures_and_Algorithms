#include <iostream>
using namespace std;

// Problem Link : https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void CreateNode(Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->data = value;
    n->next = NULL;
}

struct Node *Segregate_Even_and_Odd_nodes(Node *head)
{
    struct Node *ptr = head;
    struct Node *even = NULL;
    struct Node *odd = NULL;
    
    int x;
    while (ptr != NULL)
    {
        // x = 0 means Even Number 
        // x = 1 means Odd Number
        if ((ptr->data)%2 == 0)
        {
            x = 0;
            
        }
        else
        {
            x = 1;
        }
        ptr = ptr->next;
    }
    
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 17;
    head->next = NULL;

    CreateNode(head, 15);
    CreateNode(head, 8);
    CreateNode(head, 9);
    CreateNode(head, 2);
    CreateNode(head, 4);
    CreateNode(head, 6);

    Segregate_Even_and_Odd_nodes(head);
    return 0;
}