#include <iostream>
using namespace std;

// Problem Statement : https://youtu.be/8CACsqPWpHo

//Defining Structure for Linked List
struct Node
{
    int data;
    struct Node *next;
};

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

int Intersection_Point(struct Node *ptr1, struct Node *ptr2, int x1, int x2)
{
    int count = 0;
    for (int i = 0; i < x1 - x2; i++)
    {
        ptr1 = ptr1->next;
    }
    for (int j = 0; j < x2; j++)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
        while (ptr1->next == ptr2->next)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    //Defining Objects of Node 1
    struct Node *Node1_ka_1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node1_ka_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node1_ka_3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node1_ka_4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node1_ka_5 = (struct Node *)malloc(sizeof(struct Node));

    Node1_ka_1->data = 1000;
    Node1_ka_1->next = Node1_ka_2;

    Node1_ka_2->data = 2000;
    Node1_ka_2->next = Node1_ka_3;

    Node1_ka_3->data = 3000;
    Node1_ka_3->next = Node1_ka_4;

    Node1_ka_4->data = 4000;
    Node1_ka_4->next = Node1_ka_5;

    Node1_ka_5->data = 5000;
    Node1_ka_5->next = NULL;

    int x1 = LinkedListTraversal(Node1_ka_1);
    cout << "Number of Elements in Node 1 : " << x1 << endl;

    struct Node *Node2_ka_1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node2_ka_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node2_ka_3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *Node2_ka_4 = (struct Node *)malloc(sizeof(struct Node));

    Node2_ka_1->data = 500;
    Node2_ka_1->next = Node2_ka_2;

    Node2_ka_2->data = 1500;
    Node2_ka_2->next = Node1_ka_4;

    int x2 = LinkedListTraversal(Node2_ka_1);
    cout << "Number of Elements in Node 2 : " << x2 << endl;

    cout << Intersection_Point(Node1_ka_1, Node2_ka_1, x1, x2) << endl;

    return 0;
}
