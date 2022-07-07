#include<iostream>
#include<string>
using namespace std;

//Anagram : if string1 is somehow possible permutation of string2 or not 


//Naive Approach : Sort the both the strings and if both are same return true else false.
//Time Complexity : O(nlogn)
bool method_1(string s1, string s2) {
    if(s1.length() != s2.length()) {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return (s1 == s2);
}


//Efficient Solution : Count the frequencies and compare them
// Time Complexity : O(n)
// Space Complexity : O(CHAR)
bool method_2(string s1, string s2) {
    const int CHAR = 256;

    if(s1.length() != s2.length()) {
        return false;
    }

    int count[CHAR] = {0};

    for(int i = 0; i<s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for(int i = 0; i<CHAR; i++) {
        if(count[i] != 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    string s1 = "silent", s2 = "listen";
    // method_1(s1, s2);
    cout<<method_2(s1, s2);
    return 0;
}