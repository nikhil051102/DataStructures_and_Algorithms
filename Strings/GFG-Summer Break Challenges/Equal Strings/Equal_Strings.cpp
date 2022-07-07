//Link : https://youtu.be/MMiBnoFMUAg

#include<iostream>
#include<string>
using namespace std;

//Approach : Count the frequency of each character which is present in both string and if frequency of all the characters is even then we can make strings equal else not.

bool equal_strings(string s, string t) {
    
    if(s.length() != t.length()) {
        return false;
    } else {
        int freq[256] = {0};

        for(int i = 0; i<s.length(); i++) {
            freq[s[i]]++;
            freq[t[i]]++;
        }

        for(int j = 0; j<256; j++) {
            if(freq[j]%2) {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string s = "abcba", t = "bbcca";
    cout<<equal_strings(s, t);
    return 0;
}