#include<iostream>
#include<string>
using namespace std;

//Naive Approach : Check whole string and print return the index of any duplicate element is found
//Time Complexity : O(n^2)
//Space Complexity : O(1)
int method_1(string s) {
    for(int i = 0; i<s.length(); i++) {
        for(int j = i+1; j<s.length(); j++) {
            if(s[i] == s[j]) {
                return i;
            }
        }
    }
    return -1;
}



int main()
{
    string s = "nikhil";

    cout<<method_1(s);
    return 0;
}