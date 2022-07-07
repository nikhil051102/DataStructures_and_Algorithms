#include<iostream>
#include<string>
using namespace std;

//Approach : https://youtu.be/uUN8fVPrJn0

int factorial(int n) {
    if(n==0 || n==1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

int lexicographic_order(string s) {
    int arr[256] = {0};
    for(int i = 0; i<s.length(); i++) {
        arr[s[i]]++;
    }

    int numberOfSmallLetters;
    int output = 0;
    for(int j = 0; j<s.length(); j++) {

        int numberOfSmallLetters = 0;

        for(int k = 0; k<int(s[j]); k++) {
            if(arr[k] == 1) {
                numberOfSmallLetters++;
            }
        }
        arr[s[j]] = 0;
        output += numberOfSmallLetters*factorial(s.length()-1-j);
    }
    return output+1;
}

int main()
{
    string s = "ibytes";
    cout<<lexicographic_order(s);
    return 0;
}