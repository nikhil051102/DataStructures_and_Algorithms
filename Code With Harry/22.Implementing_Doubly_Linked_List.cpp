#include <iostream>
using namespace std;

struct Node
{
    struct Node*previous;
    int data;
    struct Node*next;
};


int main()
{
    struct Node*First = (struct Node*)malloc(sizeof(struct Node));
    struct Node*Second = (struct Node*)malloc(sizeof(struct Node));
    struct Node*Third = (struct Node*)malloc(sizeof(struct Node));
    struct Node*Fourth = (struct Node*)malloc(sizeof(struct Node));

    First->previous = NULL;
    First->data = 100;
    First->next = Second;

    Second->previous = First;
    Second->data = 200;
    Second->next = Third;

    Third->previous = Second;
    Third->data = 300;
    Third->next = Fourth;

    Fourth->previous = Third;
    Fourth->data = 400;
    Fourth->next = NULL;


    return 0;
}
