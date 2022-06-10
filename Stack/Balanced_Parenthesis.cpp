//Parenthesis Matching
#include<iostream>
#include<stack>
using namespace std;

void parenthesis_matching(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if (s[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else if (s[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
        }
    }

    if (st.empty())
    {
        cout<<"Balanced Parenthesis";
    }
    else {
        cout<<"Unbalanced";
    }
}

int main()
{
    string s = "{()}";
    parenthesis_matching(s);
    return 0;
}