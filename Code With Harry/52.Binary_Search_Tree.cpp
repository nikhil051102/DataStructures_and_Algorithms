// ★Binary Search Tree
// --> It is the type of Binary Tree.


// ★Properties
// 1) All Nodes of Left subtree are lesser than the root node.
// 2) All Nodes of Right subtree are greater than the root node.
// 3) Left and Right subtree are also Binary Search Tree.
// 4) There are no duplicate nodes.
// 5) Inorder Traversal of BST gives the sorted order of the elements.

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
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    /* Tree
            5
          /   \
         3     6
        / \
       1   4
    */
    struct Node*root = createNode(5);
    struct Node*r1 = createNode(3);
    struct Node*r2 = createNode(6);
    struct Node*r3 = createNode(1);
    struct Node*r4 = createNode(4);

    root->left = r1;
    root->right = r2;
    r1->left = r3;
    r1->right = r4;
 
    return 0;
}