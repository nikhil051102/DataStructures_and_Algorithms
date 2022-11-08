#include<iostream>
#include<math.h>
using namespace std;

//Root node is 0 level, then its childs are at 1 level and so on...

//Time Complexity : O(N)

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

int height(struct Node *root) {
    if(root==NULL) {return 0;}
    else {
        return max(height(root->left), height(root->right))+1;
    }
}

void Print_Nodes(struct Node*root, int k) {
    
}

int main()
{
    struct Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    int n = height(root);
    for (int i = 0; i < n; i++)
    {
        Print_Nodes(root, i);
    }
    return 0;
}