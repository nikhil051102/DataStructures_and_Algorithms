#include <iostream>
using namespace std;

struct Node
{
    struct Node*left;
    int data;
    struct Node*right;
};

struct Node*createNode(int value)
{
    struct Node*n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->left = NULL;
    n->right = NULL;
    n->data = value;
    return n;
}

int main()
{
    struct Node*r = createNode(2);
    struct Node*r1 = createNode(1);
    struct Node*r2 = createNode(4);

    //Linking root node with left and right node.
    r->left = r1;
    r->right = r2;
    return 0;
}