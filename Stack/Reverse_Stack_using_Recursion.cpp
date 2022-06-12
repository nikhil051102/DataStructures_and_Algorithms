#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>&myStack, int x) {
    //base case
    if(myStack.empty()) {
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    //recursive call
    pushAtBottom(myStack, x);

    myStack.push(num);
}

void stack_reverse(stack<int>&s) {
    //base case
    if(s.empty()) {
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    stack_reverse(s);

    pushAtBottom(s, num);
}

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    stack_reverse(s);
    cout<<s.top();
    return 0;
}