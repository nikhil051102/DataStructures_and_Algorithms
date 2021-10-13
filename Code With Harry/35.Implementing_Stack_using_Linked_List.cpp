#include <iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node* address;
};

void display(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->address;
    }
}

struct Node *push(struct Node *top,int value)
{
    struct Node*First = (struct Node *)malloc(sizeof(struct Node));
    First->data=value;

    First->address=top;
    top=First;
    return top;
}

int pop(struct Node *top)
{
    struct Node* last=top;
    top=top->address;
    int element=last->data;
    free(last);
    return element;

}




int main()
{
    
    

    struct Node *top=NULL;
    top=push(top,344);
    top=push(top,766);
    top=push(top,123);
    display(top);
    int value=pop(top);
    cout<<"the poped value is"<<value;




    return 0;
}
