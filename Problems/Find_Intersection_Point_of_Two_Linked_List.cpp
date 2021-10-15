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

int IntersectionPoint(struct Node*&head1, struct Node*&head2)
{
    int x1 = LinkedListTraversal(head1);
    int x2 = LinkedListTraversal(head2);

    int d = 0;
    struct Node*ptr1;  //This Pointer will point large node
    struct Node*ptr2;  //This pointer will point small node
    
    if (x1>x2)
    {
        d = x1-x2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = x2-x1;
        ptr1 = head2;  //Bcz Second Node is largest here.
        ptr2 = head1;
    }

    //Largest Node will be traversed equal to the length of difference between nodes
    while (d)
    {
        ptr1 = ptr1->next;
        d--;
    }
    
    //Here we will run pointer on both lists at the same time to look for intersection point.
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1==ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
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

    cout<<IntersectionPoint(Node1_ka_1, Node2_ka_1)<<endl;
    return 0;
}
