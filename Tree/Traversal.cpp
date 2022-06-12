#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

void Preorder_Traversal(struct Node*root) {
    if (root != NULL)
    {
        cout<<root->data<<" ";
        Preorder_Traversal(root->left);
        Preorder_Traversal(root->right);
    }
}

void Inorder_Traversal(struct Node*root) {
    if (root != NULL)
    {
        Inorder_Traversal(root->left);
        cout<<root->data<<" ";
        Inorder_Traversal(root->right);
    }
}

void Postorder_Traversal(struct Node*root) {
    if (root != NULL)
    {
        Postorder_Traversal(root->left);
        Postorder_Traversal(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    struct Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    cout<<"Preorder : ";
    Preorder_Traversal(root);
    cout<<endl<<"Inorder : ";
    Inorder_Traversal(root);
    cout<<endl<<"Postorder : ";
    Postorder_Traversal(root);
    return 0;
}