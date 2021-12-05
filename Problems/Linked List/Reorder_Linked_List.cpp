#include <iostream>
using namespace std;

// Problem Statement : https://youtu.be/9t_IcqgsJdQ?t=1733

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    int size;
    int top;
    struct Node *array;
};

void push(struct Node*head, int value)
{
    struct Node*ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->next = NULL;
    ptr->next = n;
}

int Traversal(struct Node*head)
{
    int count = 0;
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
        count++;
    }
    return count;
}

int Mid_Node(int n)
{
    if (n%2 == 0)
    {
        return (n/2)+1;
    }
    else
    {
        return (n+1)/2;
    }
}


int main()
{
    struct Node*head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    push(head, 20);
    push(head, 30);
    push(head, 40);
    push(head, 50);
    push(head, 60);
    push(head, 70);

    int Total_Nodes = Traversal(head);
    int n = Mid_Node(Total_Nodes);

    return 0;
}