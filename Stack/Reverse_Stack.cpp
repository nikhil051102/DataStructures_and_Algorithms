#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void Reverse_Stack(stack<int>& s) {
    vector<int> v;

    while(s.size() != 0) {
        v.push_back(s.top());
        s.pop();
    }

    for (int i = 0; i < v.size(); i++)
    {
        s.push(v[i]);
    }
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    Reverse_Stack(s);
    cout<<s.top();
    return 0;
}