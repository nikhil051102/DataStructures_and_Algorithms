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
    n->left = NULL;
    n->data = value;
    n->right = NULL;
    return n;
}

void inOrder_Traversal(struct Node*root)
{
    if (root != NULL)
    {
        inOrder_Traversal(root->left);
        cout<<root->data<<" ";
        inOrder_Traversal(root->right);
    }
}

int isBST(struct Node*root)
{
    static struct Node*prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    struct Node*root = createNode(10);
    struct Node*r1 = createNode(5);
    struct Node*r2 = createNode(3);
    struct Node*r3 = createNode(7);
    struct Node*r4 = createNode(6);
    struct Node*r5 = createNode(8);
    struct Node*r6 = createNode(12);
    struct Node*r7 = createNode(11);
    struct Node*r8 = createNode(13);

    /*
                10
            /       \
           5         12
         /  \       /   \
        3    7     11    13
            /  \
           6    8
    */

    root->left = r1;
    root->right = r6;
    r1->left = r2;
    r1->right = r3;
    r3->left = r4;
    r3->right = r5;
    r6->left = r7;
    r6->right = r8;

    inOrder_Traversal(root);
    cout<<endl;
    
    if (isBST(root) == 1)
    {
        cout<<"Binary Search Tree";
    }
    else
    {
        cout<<"Not a Binary Search Tree";
    }
    return 0;
}