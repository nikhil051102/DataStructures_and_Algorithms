#include<iostream>
#include<string>
using namespace std;

//Approach1 : https://youtu.be/TsTuKNA2K2k
bool isomorphic(string s1, string s2) {
    if(s1.length() != s2.length()) {return false;}
    else {
        int arr1[256] = {0};
        int arr2[256] = {0};
        for(int i = 0; i<s1.length(); i++) {
            if(!arr1[s1[i]] && !arr2[s2[i]]) {
                arr1[s1[i]] = s2[i];
                arr2[s2[i]] = s1[i];
            } else if(arr1[s1[i]] != arr2[s2[i]]) {return false;}
        }
        return true;
    }
}


//Approach 2 : https://youtu.be/VEuPGTIqXeQ?t=558
bool second_approach(string s1, string s2) {
    if(s1.length() != s2.length()) {return false;}
    else {
        int arr1[256] = {0};
        int arr2[256] = {0};

        for(int i = 0; i<s1.length(); i++) {
            if(arr1[s1[i]] != arr2[s2[i]]) {return false;}
            arr1[s1[i]] = i+1;
            arr2[s2[i]] = i+1;
        }
        return true;
    }
}

int main()
{
    string s1 = "aab", s2 = "xxy";
    cout<<isomorphic(s1, s2);
    return 0;
}