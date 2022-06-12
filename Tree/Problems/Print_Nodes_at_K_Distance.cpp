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

void solution(struct Node*root, int k) {
    if(root == NULL) {return;}
    if(k == 0) {cout<<root->data<<" ";}
    else {
        solution(root->left, k-1);
        solution(root->right, k-1);
    }
}

int main()
{
    struct Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    solution(root, 2);
    return 0;
}