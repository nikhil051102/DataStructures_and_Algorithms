#include <iostream>
using namespace std;

struct Node
{
    struct Node*left;
    int data;
    struct Node*right;
};

struct Node* createNode(int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct Node*root)
{
    if (root!= NULL)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    struct Node*root = createNode(4);
    struct Node*r1 = createNode(1);
    struct Node*r2 = createNode(6);
    struct Node*r3 = createNode(5);
    struct Node*r4 = createNode(2);

    //Connecting Nodes
    root->left = r1;
    root->right = r2;
    r1->left = r3;
    r1->right = r4;

    /*
    Tree looks like :
                4
              /   \
             1     6
            / \
           5   2 
    */
    
    preOrder(root);
    return 0;
}