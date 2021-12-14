#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*next;
};

void Display(struct Node *First)
{
    struct Node *ptr = First;
    do
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != First);
}


int main()
{
    struct Node*head = (struct Node*)malloc(sizeof(struct Node));
    struct Node*second = (struct Node*)malloc(sizeof(struct Node));
    struct Node*third = (struct Node*)malloc(sizeof(struct Node));
    struct Node*fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node*fifth = (struct Node*)malloc(sizeof(struct Node));
    struct Node*sixth = (struct Node*)malloc(sizeof(struct Node));
    struct Node*seventh = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = sixth;

    sixth->data = 60;
    sixth->next = seventh;

    seventh->data = 70;
    seventh->next = head;
    
    struct Node*ptr1 = head;
    struct Node*ptr2 = head;
    while (ptr2->next != head)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if (ptr2->next->next == head)
        {
            ptr2 = ptr2->next;
        }
    }

    if (ptr2->next == head)
    {
        ptr2->next = ptr1->next;
    }
    ptr1->next = head;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;

    Display(ptr1);
    cout<<endl;
    Display(ptr2);

    return 0;
}