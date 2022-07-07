#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Your name : ";
    // cin>>str;
    getline(cin, str);
    cout<<str;
    //If i type "Nikhil Deore" as input it will read onyl "Nikhil" because 'cin' reads until spaces come in string
    //If you want to take whole string as input use 'getline(cin, str)' function

    string str1;
    cout<<"\nYour name : ";
    getline(cin, str1, 'e');
    //Here getline function will read input untill 'e'
    cout<<str1;
    return 0;
}