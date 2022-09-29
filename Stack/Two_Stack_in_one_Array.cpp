//Question : https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1
//Approach : https://youtu.be/_6COl6V6mng?t=2077

#include<iostream>
using namespace std;

struct Stack {
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int n) {
        size = n;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    int empty() {
        if(top1 == -1 && top == size) {
            return 1;
        }
        return 0;
    }

    int push1(int x1) {
        if(size%2 != 0 && (top1+top2))
    }
}

int main()
{
    Stack s(6);
    return 0;
}