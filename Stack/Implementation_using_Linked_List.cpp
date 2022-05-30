#include<iostream>
using namespace std;

struct Node *top = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *element)
{
    if (element == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int isFull(struct Node *ptr)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int value)
{
    if (isFull(top))
    {
        cout << "Stack Overflow." << endl;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = value;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node *element)
{
    if (isEmpty(element))
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        struct Node *n = element;
        top = element->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 1000);
    top = push(top, 250);
    top = push(top, 3000);
    top = push(top, 2000);

    int element = pop(top);
    cout << "Popped Element is " << element << endl;
    LinkedListTraversal(top);
    return 0;
}