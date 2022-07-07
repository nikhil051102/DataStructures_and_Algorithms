#include<iostream>
#include<string>
using namespace std;

//Method 1 : General Approach 
//Time Complexity : O(n)
//Space Complexity : O(n)
bool Method_1(string str) {
    string rev = str;
    reverse(str.begin(), str.end());

    return (rev == str);
}

//Method 2 : Efficient Solution
//Time Complexity : O(n) in worst case and O(const time) in best case
//Space Complexity : O(1)
bool Method_2(string str) {
    for(int i = 0; i<= str.length()/2; i++) {
        if(str[i] != str[str.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "ABCDCBA";

    cout<<Method_1(str)<<endl;
    cout<<Method_2(str);
    return 0;
}