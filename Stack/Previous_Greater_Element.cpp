#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void Previous_Greater_Element(vector<int> v) {
    stack<int> s;
    vector<int> result;
    
    s.push(v[0]);
    for (int i = 0; i < v.size(); i++)
    {
        while(s.empty() == false && s.top() <= v[i]) {
            s.pop();
        }
        
        if (s.empty())
        {
            result.push_back(-1);
        }else {result.push_back(s.top());}
        s.push(v[i]);
    }
    

    for (int j = 0; j < result.size(); j++)
    {
        cout<<result[j]<<" ";
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

    Previous_Greater_Element(v);
    return 0;
}

// jibiyev528@game4hr.com
// Mega@0511