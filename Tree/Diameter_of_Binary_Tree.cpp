//Time Complexity : O(n^2)

#include <iostream>
#include <math.h>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int x) {
    data = x;
    left = right = NULL;
  }
};

int height(Node*root) {
  if(root == NULL) {return 0;}
  else {
    return max(height(root->left), height(root->right)+1);
  }
}

int diameter(Node*root) {
  if(root == NULL) return 0;
  int dl = diameter(root->left);
  int dr = diameter(root->right);
  int cur = height(root->left) + height(root->right) + 1;
  return max(cur, max(dl, dr));
}

int main() {
  struct Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(70);
  cout<<diameter(root);
}
