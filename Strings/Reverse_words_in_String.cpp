#include<iostream>
#include<string>
using namespace std;

void reverse_words(string s) {
    int j = 0;
    int i = 0;
    while(i<s.length()+1) {
        if(s[i] == ' ' || i == s.length()) {
            for(int k = 0; k < (i-j)/2+1; k++) {
                char temp = s[j];
                s[j] = s[i-1-k];
                s[i-1-k] = temp;
                j++;
            }
            j = i+1;
        }
        i++;
    }
    cout<<s;
}

int main()
{
    string s = "Nikhil Vijay Deore";
    reverse_words(s);
    return 0;
}