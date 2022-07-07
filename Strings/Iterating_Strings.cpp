#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "Nikhil Vijay Deore";

    //Method 1
    for(int i = 0; i<str.length(); i++) {
        cout<<str[i];
    }
    cout<<endl;

    //Method 2 : Using For-Each loop
    for(char ch: str) {
        cout<<ch;
    }
    return 0;
}