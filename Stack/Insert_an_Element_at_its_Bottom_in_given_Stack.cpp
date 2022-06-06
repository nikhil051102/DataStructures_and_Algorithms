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

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size()<<endl;
    pushAtBottom(s, 5);
    cout<<s.size();
    return 0;
}