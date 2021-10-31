#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
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

void InsertNode(Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        cout << "Memory Full";
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        n->data = value;
        n->next = NULL;
        ptr->next = n;
    }
}

void Enqueue(Node*f, Node *r, int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        cout << "Runtime Memory Full !";
    }
    else
    {
        n->data = value;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}



struct Node*Dequeue(Node *f)
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return f;
}

int main()
{
    struct Node *Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = 100;
    Head->next = NULL;

    // Insertion of Node
    InsertNode(Head, 200);
    InsertNode(Head, 300);
    InsertNode(Head, 400);
    InsertNode(Head, 500);

    Traversal(Head);
    cout << endl
         << endl;

    // Pointing Front and Back Pointer
    struct Node *f = Head;
    struct Node *ptr = Head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *r = ptr;

    // Enqueue Operation
    Enqueue(f, r, 600);
    Traversal(Head);

    // Dequeue Operation
    cout<<endl;
    Head = Dequeue(f);
    Traversal(Head);
    return 0;
}