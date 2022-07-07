#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

//Approach : We will move two pointers named fast and slow pointer in linked list and if
// there will be a loop then they will surely point to same node if not then they will point 
// to NULL.
bool floyd_cycle_detection(Node*head) {
    Node*slow = head;
    Node*fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            cout<<"Loop detected";
            return true;
        }
    }
    cout<<"No Loop Detected";
    return false;
}

int main()
{
    Node*head = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    Node*fourth = new Node(40);
    Node*fifth = new Node(50);
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = second;

    //In this linked list, last node is pointing to second node of linked list.
    cout<<floyd_cycle_detection(head);
    return 0;
}