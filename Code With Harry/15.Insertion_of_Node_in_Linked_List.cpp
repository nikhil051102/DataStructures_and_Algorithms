#include <iostream>
using namespace std;

struct node
{
    int number;
    struct node* address;
};

void display(struct node*ptr)
{
    while (ptr!=NULL)
    {
        cout<<"Element is "<<ptr->number<<endl;
        ptr = ptr->address;
    }
}

int main()
{
    struct node*pehla;
    struct node*dusra;
    struct node*naya;
    struct node*bichwala1;
    struct node*bichwala2;
    struct node*lastwala;

    pehla = (struct node*)malloc(sizeof(struct node));
    dusra = (struct node*)malloc(sizeof(struct node));
    naya = (struct node*)malloc(sizeof(struct node));
    bichwala1 = (struct node*)malloc(sizeof(struct node));
    bichwala2 = (struct node*)malloc(sizeof(struct node));
    lastwala = (struct node*)malloc(sizeof(struct node));



    naya->number = 50;
    naya->address = pehla;

    bichwala1->number = 70;
    bichwala1->address = bichwala2;

    bichwala2->number = 100;
    bichwala2->address = dusra;

    pehla->number = 10;
    pehla-> address = bichwala1;

    dusra->number = 20;
    dusra->address = lastwala;

    lastwala->number = 500;
    lastwala->address = NULL;

    display(naya);
    return 0;
}
