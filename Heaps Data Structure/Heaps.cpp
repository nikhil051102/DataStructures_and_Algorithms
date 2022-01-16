#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node *CreateNode(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}


int main()
{
    //We always build Heap using Array
    int array[7] = {60, 50, 40, 45, 5, 20, 30};

    struct Node *head = CreateNode(60);
    struct Node *L1 = CreateNode(50);
    struct Node *R1 = CreateNode(40);
    struct Node *L_L = CreateNode(45);
    struct Node *L_R = CreateNode(5);
    struct Node *R_L = CreateNode(20);
    struct Node *R_R = CreateNode(30);

    /*              60
                  /    \
                50      40
               /  \     /  \
             45   5    20  30
    */

    head->left = L1;
    head->right = R1;
    L1->left = L_L;
    L1->right = L_R;
    R1->left = R_L;
    R1->right = R_R;

    return 0;
}