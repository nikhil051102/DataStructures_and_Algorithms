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

int main()
{
    struct Node*root = new Node(10);  //new operator is used to dynamically allocate memory
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    return 0;
}