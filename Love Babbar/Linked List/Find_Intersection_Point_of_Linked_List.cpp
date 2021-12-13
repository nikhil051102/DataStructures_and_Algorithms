#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void CreateNode(struct Node *Head, int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = Head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->data = value;
    n->next = NULL;
}

int Total_Nodes(struct Node *Head)
{
    int count = 0;
    struct Node *ptr = Head;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    return count;
}

int main()
{
    Node *Head1 = (struct Node *)malloc(sizeof(struct Node));
    Head1->data = 3;
    Head1->next = NULL;

    CreateNode(Head1, 6);
    CreateNode(Head1, 9);
    CreateNode(Head1, 15);
    CreateNode(Head1, 30);

    Node *Head2 = (struct Node *)malloc(sizeof(struct Node));
    Head2->data = 10;
    Head2->next = NULL;

    CreateNode(Head2, 15);
    CreateNode(Head2, 30);

    int x = Total_Nodes(Head1);
    int y = Total_Nodes(Head2);

    struct Node *ptr1 = Head1;
    struct Node *ptr2 = Head2;
    if (x > y)
    {
        for (int i = 0; i < x - y; i++)
        {
            ptr1 = ptr1->next;
        }
    }
    else
    {
        for (int i = 0; i < y - x; i++)
        {
            ptr2 = ptr2->next;
        }
    }

    while (ptr1 != ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (ptr1)
    {
        cout<<"Intersection Point is "<<ptr1->data;
    }
    else
    {
        cout<<"No Intersection Point Exists";
    }
    return 0;
}