#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Adding_Node(Node *Head, int data)
{
    struct Node *ptr = Head;
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    n->data = data;
    ptr->next = n;
    n->next = NULL;
}

void Traversal(Node *Head)
{
    struct Node *ptr = Head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void Middle_of_Linked_List(struct Node *Head)
{
    struct Node *ptr = Head;
    int n = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        n++;
    }
    struct Node *ptr1 = Head;
    for (int i = 0; i < n / 2; i++)
    {
        ptr1 = ptr1->next;
    }
    cout << "Middle element : " << ptr1->data;
}

void Nth_Node_from_end_of_Linked_List(struct Node*Head, int N) {
    struct Node *ptr = Head;
    int count = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    struct Node *ptr1 = Head;
    for (int i = 0; i < count-N; i++)
    {
        ptr1 = ptr1->next;
    }
    cout<<ptr1->data;
}

struct Node*Reverse_a_Linked_List(struct Node*head) {
    struct Node*current = head;
    struct Node*prev = NULL;
    while(current != NULL) {
        struct Node*next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

struct Node *Inserting_In_Sorted_List(struct Node *Head, int data)
{
    struct Node *ptr = Head;
    if (ptr == NULL)
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = data;
        n->next = NULL;
        return n;
    }
    else if (ptr->next == NULL)
    {
        if (ptr->data > data)
        {
            struct Node *n = (struct Node *)malloc(sizeof(struct Node));
            n->data = data;
            n->next = ptr;
            return n;
        }
        else
        {
            struct Node *n = (struct Node *)malloc(sizeof(struct Node));
            n->data = data;
            ptr->next = n;
            return ptr;
        }
    }
    else
    {
        while (ptr->next->data < data && ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = data;
        n->next = ptr->next;
        ptr->next = n;
        return Head;
    }
}

int main()
{
    struct Node *Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = 100;
    Head->next = NULL;

    Adding_Node(Head, 200);
    Adding_Node(Head, 300);
    Adding_Node(Head, 400);
    Adding_Node(Head, 500);

    Traversal(Head);
    cout << endl;
    // struct Node *newHead = Inserting_In_Sorted_List(Head, 350);
    // Traversal(newHead);
    cout << endl;
    Middle_of_Linked_List(Head);
    cout<<endl;
    Nth_Node_from_end_of_Linked_List(Head, 2);
    cout<<endl;
    struct Node*newHead = Reverse_a_Linked_List(Head);
    Traversal(newHead);
    cout<<endl;
    return 0;
}