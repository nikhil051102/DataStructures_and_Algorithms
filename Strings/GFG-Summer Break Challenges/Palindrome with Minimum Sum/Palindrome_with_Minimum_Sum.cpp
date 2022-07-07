//Link : https://youtu.be/MMiBnoFMUAg
#include<iostream>
#include<string>
using namespace std;

int minimumSum(string s) {
        // code here
        int l = s.length();
        int sum = 0, prev;
        
        // checking if the string is not palindrome
        for(int i = 0; i < l/2; ++i)
            if(!(s[i] == '?' || s[l-1-i] == '?' || s[i] == s[l-1-i]))
                return -1;
                
        // filling the question marks with the character corresponding to the same index from backwards
        // because the string has to be a palindrome
        for(int i = 0; i < l/2; ++i)
            if(s[i] == '?' || s[l-1-i] == '?')
            {
                if(s[i] == '?')
                    s[i] = s[l-1-i];
                else
                    s[l-1-i] = s[i];  
            }
        
        // obtaining the first alphabet
        for(int i = 0; i < l/2; ++i)
            if(s[i] != '?')
            {
                prev = s[i];
                break;
            }
            
        for(int i = 0; i < l; ++i)
            if(s[i] != '?')
            {
                sum += abs(s[i] - prev);
                prev = s[i];
            }

        return sum;
    }

int main()
{
    string s = "a???c??c????";
    cout<<minimumSum(s);
    return 0;
}
