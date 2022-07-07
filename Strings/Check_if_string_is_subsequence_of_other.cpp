#include<iostream>
#include<string>
#include<math.h>
using namespace std;

//Subsequence : A subsequence is a sequence that can be derived from another sequence by removing zero or more elements, without changing the order of the remaining elements.
//Total Number of Subsequences of string : 2^n where n: length of string

//Naive Solution : Generate all the subsequences of string s1 and compare them with s2 if present return true else return false.
// Time Complexity = O(2^n x n)
// void Naive_Approach(string s1, string s2) {
//     for(int i = 0; i<s1.length(); i++) {

//     }

// }

//Efficient Solution : Check first character of both string if s1[0] == s2[0] then move to next character of string amd if s1[1] != s2[1] then move to next character of s1 and dont move to next character of s2 if it doesnt matches
//Time Complexity 
bool subsequence(string s1, string s2) {

    int j = 0;

    for(int i = 0; i<s1.length() && j <s2.length(); i++) {
        if(s1[i] == s2[j]) {
            j++;
        }
    }
    return (j == s2.length());
}


//Recursive Solution 
//Time Complexity : O(n+m)
//Space Complexity : O(n+m)
bool recursive(string s1, string s2, int n, int m) {
    if(m==0) {return true;}
    else if(n==0) {return false;}
    else if(s1[n-1] == s2[m-1]) {
        return recursive(s1, s2, n-1, m-1);
    } else {
        recursive(s1, s2, n-1, m);
    }
}

int main()
{
    string s1 = "ABCDE";
    string s2 = "AED";

    // Naive_Approach(s1, s1);
    // cout<<subsequence(s1, s2);
    cout<<recursive(s1, s2, s1.length(), s2.length());
    return 0;
}