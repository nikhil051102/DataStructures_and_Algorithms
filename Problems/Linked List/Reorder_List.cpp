// Problem Link : https://practice.geeksforgeeks.org/problems/reorder-list/1/?category[]=Linked%20List&category[]=Linked%20List&problemStatus=unsolved&page=2&query=category[]Linked%20ListproblemStatusunsolvedpage2category[]Linked%20List#
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Traverse_Linked_List(struct Node *head)
{
    struct Node *ptr1 = head;
    while (ptr1 != NULL)
    {
        cout << ptr1->data << " ";
        ptr1 = ptr1->next;
    }
}

void CreateNode(struct Node *head, int value)
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

void Reorder_List(struct Node *head)
{
    int n = 0;
    struct Node *Counter_Node = head;
    // Counting Total Number of Nodes
    while (Counter_Node != NULL)
    {
        n++;
        Counter_Node = Counter_Node->next;
    }

    struct Node *ptr1 = head;
    struct Node *ptr2 = head;
    // ptr1 will point to start of given node and ptr2 will point to element after middle
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2 = ptr2->next;
        ptr1->next = NULL;
        ptr1 = head; // We have to set ptr1 to head again
    }
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr2 = ptr2->next;
        ptr1->next = NULL;
        ptr1 = head; // We have to set ptr1 to head again
    }

    // Now we will reverse the new Linked list which has head as ptr2
    struct Node *Prev = NULL;
    struct Node *Current = ptr2;
    struct Node *Next = NULL;
    while (Current != NULL)
    {
        Next = Current->next;
        Current->next = Prev;
        Prev = Current;
        Current = Next;
    }
    ptr2 = Prev; // We have to Point head of reversed to ptr2 again

    // Now we will merge two linked in zinzag manner
    struct Node *a = ptr1->next;
    struct Node *b = ptr2->next;
    struct Node *x = ptr1;

    x->next = ptr2;
    x = x->next;
    while (a != NULL && b != NULL)
    {
        x->next = a;
        a = a->next;
        x = x->next;

        x->next = b;
        b = b->next;
        x = x->next;
    }
    x->next = a;                    //To include last element of First Linked List if it contains Odd Number of Nodes.

    Traverse_Linked_List(ptr1);
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;
    CreateNode(head, 2);
    CreateNode(head, 3);
    CreateNode(head, 4);
    CreateNode(head, 5);
    CreateNode(head, 6);
    CreateNode(head, 7);

    Reorder_List(head);
    return 0;
}