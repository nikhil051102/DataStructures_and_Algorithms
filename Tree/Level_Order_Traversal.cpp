#include <iostream>
#include <queue>
using namespace std;

// Approach 1 : Find Height of Tree then use "Print Nodes at K distance" for whole tree
// Time Complexity : O(N) (to find height) + [O(H)(to traverse through tree) * O(N)(to call function again)]
//                 : O(N + H*N)

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left), height(root->right)) + 1;
    }
}

// Approach 1
//  void Level_Order_Traversal(struct Node *root, int level)
//  {
//      if (root == NULL)
//      {
//          return;
//      }
//      if (level == 0)
//      {
//          cout << root->data << " ";
//      }
//      else
//      {
//          Level_Order_Traversal(root->left, level - 1);
//          Level_Order_Traversal(root->right, level - 1);
//      }
//  }

// Approach 2 : https://youtu.be/ICpp88mcB-k

// Iterative method to find height of Binary Tree
void Using_Queue(Node *root)
{
    // Here we will use queue of nodes because when will remove element to print it we should know the address of it left and right to process further

    // Base Case
    if (root == NULL)
        return;

    // Create an empty queue for level order traversal
    queue<Node *> q;

    // Enqueue Root and initialize height
    q.push(root);

    while (q.empty() == false)
    {
        // Print front of queue and remove it from queue
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);

        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main()
{
    struct Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    // Approach 1
    //  int n = height(root);
    //  for (int i = 0; i < n; i++)
    //  {
    //      Level_Order_Traversal(root, i);
    //  }

    // Approach 2 : Using Queue
    Using_Queue(root);
    return 0;
}