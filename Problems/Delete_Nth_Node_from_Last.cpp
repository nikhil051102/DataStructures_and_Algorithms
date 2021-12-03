#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

void Insert_Node_at_End(struct Node*head, int value)
{
    struct Node*ptr = head;
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->data = value;
    n->next = NULL;
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

void Nth_Node_Deletion(struct Node*head, int x)
{
    struct Node*ptr = head;
    for (int i = 0; i < x-1; i++)
    {
        ptr = ptr->next;
    }
    struct Node*current = ptr;
    struct Node*agla = ptr->next;
    struct Node*aglakaagla = ptr->next->next;

    current->next = aglakaagla;
}

int main()
{
    struct Node*head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    Insert_Node_at_End(head, 20);
    Insert_Node_at_End(head, 30);
    Insert_Node_at_End(head, 40);
    Insert_Node_at_End(head, 50);

    int n = Traversal(head);

    int m;
    cout<<"Nth Node from Last : ";
    cin>>m;

    Nth_Node_Deletion(head, (n-m));
    Traversal(head);
    return 0;
}