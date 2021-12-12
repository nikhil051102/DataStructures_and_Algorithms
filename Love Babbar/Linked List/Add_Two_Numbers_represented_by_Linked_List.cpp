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

void NewNode(Node*head, int value)
{
    struct Node*n =  (struct Node*)malloc(sizeof(struct Node));
    struct Node*ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = n;
    n->data = value;
    n->next = NULL;
}

struct Node* FirstNodeDeleter(Node*head)
{
    struct Node*ptr = head->next;
    free(head);
    return ptr;
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
    struct Node*Head1 = (struct Node*)malloc(sizeof(struct Node));
    Head1->data = 100;
    Head1->next = NULL;
    NewNode(Head1, 4);
    NewNode(Head1, 5);
    struct Node*head1 = FirstNodeDeleter(Head1);

    struct Node*Head2 = (struct Node*)malloc(sizeof(struct Node));
    Head2->data = 100;
    Head2->next = NULL;
    NewNode(Head2, 3);
    NewNode(Head2, 4);
    NewNode(Head2, 5);
    struct Node*head2 = FirstNodeDeleter(Head2);

    struct Node*R1 = Reverse_Linked_by_Pointers(head1);
    struct Node*R2 = Reverse_Linked_by_Pointers(head2);
    Traversal(R1);
    cout<<endl;
    Traversal(R2);

    struct Node*ptr1 = R1;
    struct Node*ptr2 = R2;

    struct Node*ResultList = (struct Node*)malloc(sizeof(struct Node));
    ResultList->data = (ptr1->data + ptr2->data)%10;
    ResultList->next = NULL;
    while (ptr1 != NULL and ptr2 != NULL)
    {
        //division = (ptr1->data + ptr2->data)/10;
        //remainder = (ptr1->data + ptr2->data)%10;
        if (ptr1->next == NULL)
        {
            NewNode(ResultList, ptr2->next->data);
        }
        else if (ptr2->next == NULL)
        {
            NewNode(ResultList, ptr1->next->data); 
        }
        else
        {
            NewNode(ResultList, (ptr1->next->data + ptr2->next->data)%10 + (ptr1->data + ptr2->data)/10);
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    cout<<endl;
    Traversal(ResultList);
    struct Node*FinalList = Reverse_Linked_by_Pointers(ResultList);
    cout<<endl;
    Traversal(FinalList);
    return 0;
}