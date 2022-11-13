#include<iostream>
#include<math.h>
using namespace std;

struct Node {
    int data;
    Node*left;
    Node*right;

    Node(int k) {
        data = k;
        left = right = NULL;
    }
};

void pre_order(Node*root) {
    if(root==NULL) {
        return;
    } else {
        cout<<root->data<<" ";
        pre_order(root->left);
        pre_order(root->right);
    }
}

void in_order(Node*root) {
    if(root==NULL) {
        return;
    } else {
        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
    }
}

void post_order(Node*root) {
    if(root==NULL) {
        return;
    } else {
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
    }
}

int height(struct Node*root) {
    if(root == NULL) {
        return 0;
    } else {
        return max(height(root->left), height(root->right))+1;
    }
}

void level_order(Node*root, int level) {
    if (root == NULL)
    {
        return;
    }
    if (level == 0)
    {
        cout << root->data << " ";
    }
    else
    {
        level_order(root->left, level - 1);
        level_order(root->right, level - 1);
    }
}

int main()
{
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    pre_order(root);
    cout<<endl;
    in_order(root);
    cout<<endl;
    post_order(root);
    cout<<endl;

    int n = height(root);
    for(int i = 0; i<n; i++) {
        level_order(root, i);
        cout<<endl;
    }
    return 0;
}   