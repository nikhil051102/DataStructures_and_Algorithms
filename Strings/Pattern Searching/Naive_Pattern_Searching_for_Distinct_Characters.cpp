#include<iostream>
#include<string>
#include<vector>
using namespace std;

//All letters in pattern string are distinct.
//Time Complexity : Theta(n )
vector<int> naive_searching(string txt, string pattern) {
    int m = txt.length();
    int n = pattern.length();

    vector<int> v;
    int i = 0;
    while(i<=m-n) {
        if(txt[i] == pattern[0]) {
            int j;
            for(j = 0; j<n; j++) {
                if(txt[i+j] != pattern[j]) {
                    break;
                }
            }
            if(j==n) {
                v.push_back(i);
                i = i+j-1;
            }
        }
        i++;
    }
    return v;
}

int main()
{
    string txt = "ABCABCDABCD";
    string pattern = "ABCD";
    vector<int> v = naive_searching(txt, pattern);

    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}