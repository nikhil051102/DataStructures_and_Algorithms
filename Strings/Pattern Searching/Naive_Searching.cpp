#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Problem : You are given a string and a pattern string. You have to find the index of all its ocurrences

/*
There will not be any worst case in this algorithm
n = string.length()
m = pattern.length()
Time Complexity = O((n-m+1).m)
*/

vector<int> naive_searching(string s, string pattern) {

    vector<int> v;
    int m = s.length();
    int n = pattern.length();

    for(int i = 0; i<=s.length()-pattern.length(); i++) {
        int j;
        for(j = 0; j<m; j++) {
            if(pattern[i] != s[i+j]) {
                break;
            }
        }
        if(j == m) {
            cout<<i<<" ";
            v.push_back(j);
        }
    }
    return v;
}

int main()
{
    string s = "AAAAA";
    string pattern = "AAA";

    vector<int> v = naive_searching(s, pattern);

    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}