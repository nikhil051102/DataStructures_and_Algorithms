#include <iostream>
#include <stack>
using namespace std;

int postfix_evaluation(string postfix)
{
    stack<int> st;

    for (int i = 0; i < postfix.length(); i++)
    {
        if (postfix[i] >= '0' && postfix[i] <= '9')
        {
            st.push(postfix[i]);
        }
        else
        {
            int x = st.top();
            st.pop();

            int y = st.top();
            st.pop();

            if (postfix[i] == '+')
            {
                st.push(y + x);
            }
            else if (postfix[i] == '-')
            {
                st.push(y - x);
            }
            else if (postfix[i] == '*')
            {
                st.push(y * x);
            }
            else if (postfix[i] == '/')
            {
                st.push(y / x);
            }
        }
    }
    return st.top();
}

int main()
{
    string postfix = "92*3+";
    int result = postfix_evaluation(postfix);
    cout << result;
    return 0;
}