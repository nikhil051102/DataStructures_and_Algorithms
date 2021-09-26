#include <iostream>
using namespace std;

struct Node
{
    int number;
    struct Node * address;
};

void display(struct Node* x)
{
    while (x != NULL)
    {
        cout<<"Element : "<<x->number<<endl;
        x = x->address;
    }

}


// Case1 : Deleting the First Node.
struct Node * DeleteFirst(struct Node * First)
{
    struct Node * ptr = First;
    First = First->address;
    free(ptr);
    return First;

}

// Case2 : Deleting at given Index.
struct Node * DeleteAtIndex(struct Node * First, int Index)
{
    struct Node * p = First;
    struct Node * q = First->address;
    for (int i = 0; i < Index-1; i++)
    {
        p = p->address;
        q = q->address;
    }
    p->address = q->address;
    return First;
}


//Case3 : Deleting the Last Node.
struct Node * DeleteAtLast(struct Node * First)
{
    struct Node * x = First;
    struct Node * y = First->address;
    while (y->address != NULL)
    {
        x = x->address;
        y = y->address;
    }
    x->address = NULL;
    free(y);
    return First;
}


//Case4 : Delete the Given Element. Here we will run loop till that value comes like we have done in Delete at given value.
struct Node*DeleteGivenValue(struct Node * First, int value)
{
    struct Node * n = First;
    struct Node * m = First->address;

    while (m->number != value && m->address != NULL)
    {
        n = n->address;
        m = m->address;
    }
    n->address = m->address;
    free(m);
    return First; 
}

int main()
{
    struct Node * First;
    struct Node * Second;
    struct Node * Third;
    struct Node * Fourth;
    struct Node * Fifth;

    First = (struct Node*)malloc(sizeof(struct Node));
    Second = (struct Node*)malloc(sizeof(struct Node));
    Third = (struct Node*)malloc(sizeof(struct Node));
    Fourth = (struct Node*)malloc(sizeof(struct Node));
    Fifth = (struct Node*)malloc(sizeof(struct Node));


    First->number = 10;
    First->address = Second;

    Second->number = 20;
    Second->address = Third;

    Third->number = 30;
    Third->address = Fourth;

    Fourth ->number = 40;
    Fourth->address = Fifth;

    Fifth->number = 50;
    Fifth->address = NULL;


    cout<<"Linked List before Deletion : "<<endl;
    display(First);

    // Case 1
    // First = DeleteFirst(First);

    // Case 2
    // int Index;
    // cout<<"Index : ";
    // cin>>Index;
    // DeleteAtIndex(First, Index);



    //Case 3
    // First = DeleteAtLast(First);

    //Case 4
    First = DeleteGivenValue(First, 30);
    cout<<"Linked List After Deletion : "<<endl;
    display(First);
    return 0;
}
