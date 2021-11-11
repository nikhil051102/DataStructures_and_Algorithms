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

    root->left = r1;
    root->right = r2;
    r1->left = r3;
    r1->right = r4;
    r4->left = r6;
    r4->right = r7;
    r2->right = r5;
    r5->left = r8;
    return 0;
}