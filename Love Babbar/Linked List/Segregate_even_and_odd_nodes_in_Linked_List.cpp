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
    struct Node *even = NULL;
    struct Node *odd = NULL;
    struct Node *e = NULL;
    struct Node *o = NULL;

    while (head != NULL)
    {
        // x = 0 means Even Number
        // x = 1 means Odd Number
        if ((head->data) % 2 == 0)
        {
            if (even == NULL)
            {
                even = head;
                e = head;
            }
            else
            {
                e->next = head;
                e = e->next;
            }
        }
        else
        {
            if (odd == NULL)
            {
                odd = head;
                o = head;
            }
            else
            {
                o->next = head;
                o = o->next;
            }
        }
        head = head->next;
    }
    if(e) e->next = odd;
    if(o) o->next = NULL;
    if(even) return even;
    return odd;
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

    Traversal(Segregate_Even_and_Odd_nodes(head));
    return 0;
}