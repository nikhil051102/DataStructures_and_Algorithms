#include <iostream>
using namespace std;

//Problem Statement : https://youtu.be/v6g1g4lNowM
struct Node
{
    int data;
    struct Node*next;
};

struct Node* Insert(struct Node*ptr, int value)
{
    struct Node*n = (struct Node*)malloc(sizeof(struct Node));
    n->data = value;
    n->next = ptr;
    ptr = n;
    return n;
}

int LinkedListTraversal(struct Node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}


int main()
{
    struct Node*s;
    s = Insert(s, 1000);
    s = Insert(s, 2000);
    s = Insert(s, 3000);
    s = Insert(s, 4000);
    s = Insert(s, 5000);
    return 0;
}