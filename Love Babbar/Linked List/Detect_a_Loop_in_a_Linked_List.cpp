#include <iostream>
using namespace std;

// Problem Link : https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

/**
 * Approach 1
-> Store the elements of Linked List in Array
-> Now If there is duplicate element is present in Array then there is loop in Linked List
**/

struct Node
{
    int data;
    struct Node *next;
};

int Approach1(struct Node *Head)
{
    // Making Array to store element in Array.
    // We will check, if the element we are inserting in an array is present already in it if not then only we will insert element in array
    struct Node *ptr = Head;
    int Array[10];

    int x = 0;
    int y = 0;
    for (int j = 0; j < 10; j++)
    {
        Array[j] = ptr->data;
        for (int k = j - 1; k >= 0; k--)
        {
            if (Array[k] == Array[j])
            {
                x = x+1;
            }
        }
        if (x==1)
        {
            break;
        }
        ptr = ptr->next;
        y++;
    }

    return y;
}

int main()
{
    /**
    10 -> 20 -> 30 -> 40
                  \  /
                   50
     Here there is loop after 5
    **/

    struct Node *Head = new Node();
    struct Node *Second = new Node();
    struct Node *Third = new Node();
    struct Node *Fourth = new Node();
    struct Node *Fifth = new Node();

    Head->data = 10;
    Head->next = Second;

    Second->data = 20;
    Second->next = Third;

    Third->data = 30;
    Third->next = Fourth;

    Fourth->data = 40;
    Fourth->next = Fifth;

    Fifth->data = 50;
    Fifth->next = Third;

    cout<<Approach1(Head);
    return 0;
}