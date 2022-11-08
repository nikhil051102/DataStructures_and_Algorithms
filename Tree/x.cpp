#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int k) {
        data = k;
        left = right = NULL;
    }
};

void Level_Order_Traversal(Node *root, int n) {
    if(n == 0) {
        return;
    } else {
        cout<<root->data<<" ";
        Level_Order_Traversal(root->left, n-1);
        Level_Order_Traversal(root->right, n-1);
    }
}

int main()
{
    //Level 0
    struct Node*root = new Node(10);
    //Level 1
    root->left = new Node(20);
    root->right = new Node(30);
    //Level 2
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    Level_Order_Traversal(root, 3);
    return 0;
}