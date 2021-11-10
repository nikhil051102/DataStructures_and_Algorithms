/*
1) Worst case Complexity : Height of Tree = O(n)
2) Best Case Complexity : O(logn)
*/

#include <iostream>
using namespace std;

struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};

struct Node *createNode(int value)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->left = NULL;
    n->right = NULL;
    n->data = value;
    return n;
}

struct Node*search(struct Node*root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

int main()
{
    struct Node *root = createNode(50);
    struct Node *r1 = createNode(40);
    struct Node *r2 = createNode(60);
    struct Node *r3 = createNode(20);
    struct Node *r4 = createNode(45);
    struct Node *r5 = createNode(55);
    struct Node *r6 = createNode(70);

    /*
                50
              /    \
            40     60
           /  \   /  \
          20  45 55   70
    */

    root->left = r1;
    root->right = r2;
    r1->left = r3;
    r1->right = r4;
    r2->left = r5;
    r2->right = r6;

    struct Node*ans = search(root, 70);
    
    if (ans != NULL)
    {
        cout<<"Element is present in Tree";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}