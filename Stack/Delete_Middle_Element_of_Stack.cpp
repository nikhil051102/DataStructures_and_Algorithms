//Delete Middle element of stack
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void delete_middle(stack<int> st) {
    vector<int> v;
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    int n;
    if ((v.size()/2)%2 == 0)
    {
        n = v.size()/2;
    } else {n = (v.size()/2)-1;}
    
    for (int i = v.size()-1; i >= 0; i--)
    {
        if (i != n)
        {
            st.push(v[i]);
        }
    }
    cout<<endl<<st.top();
    st.pop();
    cout<<endl<<st.top();
    st.pop();
    cout<<endl<<st.top();
    st.pop();
    cout<<endl<<st.top();
    st.pop();
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    delete_middle(st);
    return 0;
}