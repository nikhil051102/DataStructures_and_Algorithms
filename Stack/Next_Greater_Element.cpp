#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// Approach 2 : We will implement Previous Greater element function from end to start of array

void Next_Greater_Element(vector<int> v)
{
    stack<int> s;
    vector<int> result(v.size());

    result[v.size() - 1] = -1;
    s.push(v[v.size() - 1]);
    for (int i = v.size() - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= v[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            result[i] = -1;
        }
        else
        {
            result[i] = s.top();
        }
        s.push(v[i]);
    }

    for (int j = 0; j < result.size(); j++)
    {
        cout << result[j] << " ";
    }
}

int main()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(5);
    v.push_back(15);
    v.push_back(6);
    v.push_back(2);
    v.push_back(8);

    Next_Greater_Element(v);
    return 0;
}