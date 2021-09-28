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

    cout<<"List After Insertion : "<<endl;
    struct Node *x;
    x = InsertAtFirst(First, 0);
    Display(x);
    return 0;
}
