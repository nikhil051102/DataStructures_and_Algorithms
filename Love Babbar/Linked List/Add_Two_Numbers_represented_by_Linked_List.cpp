#include <iostream>
using namespace std;

/**
Approach
-> Reverse Linked Lists by pointers
**/

struct Node
{
    int data;
    struct Node*next;
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

struct Node *CreateNode(int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(Node));
    n->data = value;
    n->next = NULL;
    return n;
}

struct Node*Reverse_Linked_by_Pointers(Node*head)
{ 
    struct Node*previous = NULL;
    struct Node*current = head;
    struct Node*next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
int main()
{
    struct Node*Head1 = CreateNode(4);
    struct Node*second1 = CreateNode(5);
    Head1->next = second1;
    second1->next = NULL;

    struct Node*Head2 = CreateNode(3);
    struct Node*second2 = CreateNode(4);
    struct Node*Third2 = CreateNode(5);
    Head2->next = second2;
    second2->next = Third2;
    Third2->next = NULL;

    struct Node*R1 = Reverse_Linked_by_Pointers(Head1);
    struct Node*R2 = Reverse_Linked_by_Pointers(Head2);
    Traversal(R1);
    cout<<endl;
    Traversal(R2);

    struct Node*ptr1 = R1;
    struct Node*ptr2 = R2;
    cout<<(ptr1->data + ptr2->data)%10;
    while (ptr1 != NULL and ptr2 != NULL)
    {
        //division = (ptr1->data + ptr2->data)/10;
        //remainder = (ptr1->data + ptr2->data)%10;
        if (ptr1->next != NULL)
        {
            cout<<ptr1->data;
        }
        else if (ptr2->next != NULL)
        {
            cout<<ptr2->data;
        }
        else
        {
            cout<<(ptr1->next->data + ptr2->next->data)%10 + (ptr1->data + ptr2->data)/10;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return 0;
}