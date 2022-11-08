#include<iostream>
using namespace std;

/*
Time Complexity : O(n)
Space Complexity : O(h) 

                        10
                      /    \
                    20     30
                  /   \      \
                40    50     60
                     /  \
                   70   80
*/

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int k) {
        value = k;
        left = right = NULL;
    }
};

void inorder(Node* root) {      //Left -> Root -> Right
    if(root != NULL) {
        inorder(root->left);
        cout<<(root->value)<<" ";
        inorder(root->right);
    }
}

void preorder(Node*root) {     //Root -> Left -> Right
    if(root != NULL) {
        cout<<(root->value)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node*root) {     //Left -> Right -> Root
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<(root->value)<<" ";
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);

    root->right->right = new Node(60);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}