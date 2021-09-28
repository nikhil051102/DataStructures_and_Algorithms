#include <iostream>
using namespace std;

struct Node
{
    int number;
    struct Node *next;
};

void Display(struct Node *First)
{
    struct Node *ptr = First;
    do
    {
        cout << "Element : " << ptr->number << endl;
        ptr = ptr->next;
    } while (ptr != First);
}

struct Node *InsertAtFirst(struct Node *First, int data)
{
    struct Node *InsertedAtFirst = (struct Node *)malloc(sizeof(struct Node));
    InsertedAtFirst->number = data;
    struct Node*p = First->next;

    while (p->next != First)
    {
        p = p->next;
    }
    p->next = InsertedAtFirst;
    InsertedAtFirst->next = First;
    First = p;
    
    return InsertedAtFirst;
}


struct Node*InsertAtIndex(struct Node*First, int data, int index)
{
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node*p = First;
    int i = 0;

    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->number = data;
    ptr->next = p->next;
    p->next = ptr;
    return First;
}


struct Node*InsertAtEnd(struct Node*First, int data)
{
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node*p = First;

    while (p->next != First)
    {
       p = p->next;
    }
    ptr->number = data;
    ptr->next = First;
    return First;
}

int main()
{
    struct Node *First;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;
    struct Node *Fifth;

    First = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));
    Fifth = (struct Node *)malloc(sizeof(struct Node));

    First->number = 10;
    First->next = Second;

    Second->number = 20;
    Second->next = Third;

    Third->number = 30;
    Third->next = Fourth;

    Fourth->number = 40;
    Fourth->next = Fifth;

    Fifth->number = 50;
    Fifth->next = First;

    cout<<"List Before Insertion : "<<endl;
    Display(First);


    //1. Inserting Element at First Position
    // struct Node *x;
    // x = InsertAtFirst(First, 0);
    // cout<<"List After Insertion : "<<endl;
    // Display(x);
    

    // 2.Inserting Element at Given Index.
    // struct Node *x;
    // cout<<"List After Insertion : "<<endl;
    // x = InsertAtIndex(First, 100, 2);
    // Display(x);


    // 3.Inserting Element at End of List;
    // struct Node *x;
    // cout<<"List After Insertion : "<<endl;
    // x = InsertAtEnd(First, 200);
    // Display(x);

    //In Inserting at End : Above Code is perfect but if we Try to display then we will not
    // get desired output because that loop of Display function is stopping at First Function 
    // but we have inserted new node.
    return 0;
}
