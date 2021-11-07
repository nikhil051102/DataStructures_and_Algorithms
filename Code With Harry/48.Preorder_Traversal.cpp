#include <iostream>
using namespace std;

struct Node
{
    struct Node*left;
    int data;
    struct Node*right;
};

struct Node* createNode(struct Node*root, int value)
{
    struct Node*ptr = root;
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    return n;
}


int main()
{
    struct Node*root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 4;
    root->left = createNode(root, 1);
    root->right = createNode(root, 6);
    return 0;
}