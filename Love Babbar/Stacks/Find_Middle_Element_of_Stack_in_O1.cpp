#include <iostream>
using namespace std;

// Problem Link : https://www.geeksforgeeks.org/design-a-stack-with-find-middle-operation/

struct Node
{
    struct Node *previous;
    int data;
    struct Node *next;
};

int Count = 0;
struct Node *Top = NULL;

bool isEmpty()
{
    return Top->previous == NULL;
}

void Push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        cout << "Heap Overflow";
    }
    else
    {
        Count++;

        newNode->previous = Top;
        newNode->data = value;
        newNode->next = NULL;
        Top = newNode;
    }
}

void Pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow";
        exit(1);
    }
    else
    {
        Count--;

        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->next = NULL;
        temp->data = Top->previous->data;
        temp->previous = Top->previous->previous;

        free(Top);
        Top = temp;
    }
}

void DeleteMiddle()
{
    if (Count%2 == 0)
    {
        int x = Count/2 + 2;
        int i=0;
        struct Node*ptr = Top;
        while (i<Count-x)
        {
            ptr = ptr->previous;
            i++;
        }
        struct Node*node = ptr->previous;
        ptr->previous = ptr->previous->previous;
        cout<<"Middle Element "<<node->data<<" Deleted"<<endl;
        free(node);
    }
    else
    {
        int j=0;
        int y = Count/2 + 2;
        struct Node*ptr = Top;
        while (j<Count - y)
        {
            ptr = ptr->previous;
            j++;
        }
        struct Node*node = ptr->previous;
        ptr->previous = ptr->previous->previous;
        cout<<"Middle Element "<<node->data<<" Deleted"<<endl;
        free(node);
    }
}

void Display()
{
    struct Node*ptr = Top;
    while (ptr != NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->previous;
    }
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Push(60);
    Push(70);

    Pop();
    DeleteMiddle();
    Display();
    return 0;
}