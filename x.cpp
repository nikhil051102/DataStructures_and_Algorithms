#include<iostream>
using namespace std;

struct Stack {
    int *arr;
    int top;
    int size;

    Stack(int n) {
        size = n;
        top = -1;
        arr = new int[n];
    }

    int empty() {
        if(top == -1) {
            return 1;
        } else {
            return 0;
        }
    }

    int push(int x) {
        if(top == size-1) {
            cout<<"Stack Overflow";
        } else {
            top = top+1;
            arr[top] = x;
        }
    }

    int pop() {
        if(empty()) {
            cout<<"Stack Underflow";
        } else {
            top = top - 1;
        }
    }
};

int main()
{
    
    return 0;
}