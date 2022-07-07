#include<iostream>
using namespace std;

struct Node {
    int data;
    Node*next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* swap(Node*head, int num, int K) 
{
    Node*ptr1 = head;
    Node*ptr2 = head;
    
    if(K > num) {
        return head;
    } 
    else if(K == 1) {
        for(int i = 0; i<num-K-1; i++) {
            ptr2 = ptr2->next;
        }
        Node*temp1 = ptr1->next;
        Node*temp2 = ptr2->next;
        
        ptr2->next = ptr1;
        ptr2 = ptr2->next;
        ptr2->next = NULL;
        
        temp2->next = temp1;
        return temp2;
    }
    else {
        for(int i = 0; i<K-1-1; i++) {
            ptr1 = ptr1->next;
        }
        for(int j = 0; j<num-K-1; j++) {
            ptr2 = ptr2->next;
        }
        Node*temp1 = ptr1->next->next;
        Node*temp2 = ptr2->next->next;
        

        Node*temp3 = ptr1->next;
        ptr1->next = ptr2->next;
        ptr2->next = temp3;
            
        ptr2 = ptr2->next;
        ptr1 = ptr1->next;


        ptr2->next = temp2;
        ptr1->next = temp1;
            
    return head;
    }
}

void addNode(Node*head, int x) {
    struct Node*ptr = head;

    while(ptr->next != NULL) {
        ptr = ptr->next;
    }

    Node*n = new Node(x);
    ptr->next = n;
}

void Traversal(Node*head) {
    struct Node*ptr = head;

    while(ptr != NULL) {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main()
{
    Node*head = new Node(10);
    addNode(head, 20);
    addNode(head, 30);
    addNode(head, 40);
    // addNode(head, 50);
    // addNode(head, 60);
    // addNode(head, 70);

    Node*head1 =  swap(head, 4, 3);
    Traversal(head1);
    return 0;
}