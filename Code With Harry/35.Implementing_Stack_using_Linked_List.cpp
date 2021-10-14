#include <iostream>
using namespace std;

//Insertion and deletion of node will be done in 0(1) at Head Node that's why we prefer Head Node for operations.
//Head will be used for push() and pop() operations.
//This stack will net overflow bcz of Linked List we can add as many elements as we want.
//When the head node is pointing towards NULL then this stack is Underflow.
//Head is Top and Tail(Last Node) is Bottom.
//Stack will overflow when Heap memory is Exhausted.


struct Node
{
    int data;
    struct Node *address;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is " << ptr->data << endl;
        ptr = ptr->address;
    }
}

int isEmpty(struct Node *element)
{
    if (element == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int isFull(struct Node *ptr)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int value)
{
    if (isFull(top))
    {
        cout << "Stack Overflow." << endl;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = value;
        n->address = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top)
{
    if (isEmpty(*top))
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->address;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{

    struct Node *top = NULL;
    top = push(top, 1000);
    top = push(top, 250);
    top = push(top, 3000);
    top = push(top, 2000);

    int element = pop(&top);
    cout << "Popped Element is " << element << endl;
    LinkedListTraversal(top);
    return 0;
}

// //Method 2
// struct Node *top = NULL;

// struct Stack
// {
//     int size;
//     int top;
//     struct Node;
// };

// struct Node
// {
//     int data;
//     struct Node *address;
// };

// void LinkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << "Element is " << ptr->data << endl;
//         ptr = ptr->address;
//     }
// }

// int isEmpty(struct Node *element)
// {
//     if (element == NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// };

// int isFull(struct Node *ptr)
// {
//     struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//     if (n == NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// struct Node *push(struct Node *top, int value)
// {
//     if (isFull(top))
//     {
//         cout << "Stack Overflow." << endl;
//     }
//     else
//     {
//         struct Node *n = (struct Node *)malloc(sizeof(struct Node));
//         n->data = value;
//         n->address = top;
//         top = n;
//         return top;
//     }
// }

// int pop(struct Node *element)
// {
//     if (isEmpty(element))
//     {
//         cout << "Stack Underflow" << endl;
//     }
//     else
//     {
//         struct Node *n = element;
//         top = element->address;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

// int main()
// {
//     top = push(top, 1000);
//     top = push(top, 250);
//     top = push(top, 3000);
//     top = push(top, 2000);

//     int element = pop(&top);
//     cout << "Popped Element is " << element << endl;
//     LinkedListTraversal(top);
//     return 0;
// }