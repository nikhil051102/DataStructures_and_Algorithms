#include <iostream>
using namespace std;

struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
    int height; // To find Mod of Balance Factor.
};

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return n->height;
    }
}

struct Node*createNode(int key)
{
    struct Node*node = (struct Node*)malloc(sizeof(struct Node));
    node->left = NULL;
    node->data = key;
    node->right = NULL;
    node->height = 1;
    return node;
}

int getBalanceFactor(struct Node*n)
{
    if (n==NULL)
    {
        return 0;
    }
    else
    {
        return getHeight(n->left)-getHeight(n->right);
    }
}

int main()
{

    return 0;
}