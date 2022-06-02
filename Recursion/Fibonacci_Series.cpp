#include<iostream>
using namespace std;

int fibonacci_series(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }

    int ans = fibonacci_series(n-1) + fibonacci_series(n-2);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci_series(n);
    return 0;
}