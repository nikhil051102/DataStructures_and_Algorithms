#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node* Duplicate_Node(Node *head)
{
    Node *ptr = head;
    if (head == NULL)
        return head;
    if (head->next == NULL)
        return head;
    else
    {
        while (ptr != NULL)
        {
            Node *ptr2 = ptr;
            while (ptr2 != NULL)
            {
                if (ptr->data == ptr2->next->data)
                {
                    ptr2->next = ptr2->next->next;
                }
                ptr2 = ptr2->next;
            }
            ptr = ptr->next;
        }
    }
    return head;
}

int main()
{
    Node *head = new Node();
    Node *Second = new Node();
    Node *Third = new Node();
    Node *Fourth = new Node();
    Node *Fifth = new Node();

    head->data = 10;
    head->next = Second;

    Second->data = 30;
    Second->next = Third;

    Third->data = 20;
    Third->next = Fourth;

    Fourth->data = 10;
    Fourth->next = Fifth;

    Fifth->data = 50;
    Fifth->next = NULL;

    Traversal(head);
    Duplicate_Node(head);
    Traversal(head);
    return 0;
}