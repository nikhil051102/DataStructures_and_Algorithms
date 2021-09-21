#include <iostream>
using namespace std;

struct node {
    int value;
    struct node * nextaddress;
};

void display(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->value<<endl;
        ptr=ptr->nextaddress;
    }
}
int main()
{
    struct node *pehla;
    struct node *doosra;
    struct node *teesra;
    struct node *chautha;
    
    pehla=(struct node*)malloc(sizeof(struct node));
    doosra=(struct node*)malloc(sizeof(struct node));
    teesra=(struct node*)malloc(sizeof(struct node));
    chautha=(struct node*)malloc(sizeof(struct node));

    pehla->value=1;
    pehla->nextaddress=doosra;

    doosra->value=22;
    doosra->nextaddress=teesra;

    teesra->value=99;
    teesra->nextaddress=chautha;

    chautha->value=109;
    chautha->nextaddress=NULL;

    display(pehla);


}
