#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

void createNode(struct Node*head, int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    n->data = value;
    n->next = NULL;
    ptr->next = n;
}

int TotalNodes(struct Node*head)
{
    int count = 0;
    struct Node*ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

int main()
{
    struct Node*head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    createNode(head, 20);
    createNode(head, 30);
    createNode(head, 40);
    createNode(head, 50);

    int n = TotalNodes(head);

    int m;
    if (n%2 == 0)
    {
        m = (n/2) + 1;
    }
    else
    {
        m = (n+1)/2;
    }
    
    struct Node*ptr = head;
    for (int i = 0; i < m-1; i++)
    {
        ptr = ptr->next;
    }
    cout<<ptr->data;
    return 0;
}