#include<iostream>
#include<math.h>
using namespace std;

// Height of Binary Tree : Maximum number of nodes from root_node to leaf_node
// Time Complexity : O(N)
// Space Complexity : O(h)

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

int height(struct Node*root) {
    if(root == NULL) {return 0;}
    else {
        return max(height(root->left), height(root->right))+1;
    }
}

int main()
{
    struct Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout<<"Height : "<<height(root);
    return 0;
}