#include<iostream>
using namespace std;

void say_digit(int n, string arr[]) {
    //base case
    if(n == 0) {
        // cout<<"zero";
        return ;
    }

    //processing
    int digit = n%10;
    n = n/10;

    //recursive_call
    say_digit(n, arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    cin>>n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    say_digit(n, arr);
    return 0;
}