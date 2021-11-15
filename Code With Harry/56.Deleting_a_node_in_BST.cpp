#include <iostream>
using namespace std;

//Cases while Deleting Node
// Case 1 : The node is leaf node.
        //   -> Steps :
        //   1) Search the Node.
        //   2) Delete the Node.
// Case 2 : The node is non-leaf node.
        //  -> Steps : 
        //  1) If we delete the non-leaf node then its place will be taken by 'Inorder pre' or 'Inorder post'
// Case 3 : The node is root node.


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

void Inorder(struct Node*root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        cout<<root->data<<" ";
        Inorder(root->right);
    }
}

int main()
{
    Node *root = createNode(8);
    Node *r1 = createNode(3);
    Node *r2 = createNode(10);
    Node *r3 = createNode(1);
    Node *r4 = createNode(6);
    Node *r5 = createNode(14);
    Node *r6 = createNode(4);
    Node *r7 = createNode(7);
    Node *r8 = createNode(13);
    Node *r9 = createNode(20);
    Node *r10 = createNode(9);

    root->left = r1;
    root->right = r2;
    r1->left = r3;
    r1->right = r4;
    r4->left = r6;
    r4->right = r7;
    r2->right = r5;
    r2->left = r10;
    r5->left = r8;
    r5->right = r9;

    /*  Tree
                    8
                /      \
               3        10
              / \       / \
             1   6     9   14
                / \       /  \
               4   7     13  20   
    */

    Inorder(root);
    return 0;
}