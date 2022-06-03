#include<iostream>
using namespace std;

int count_stairs(int n) {
    //base case
    if(n < 0) {
        return 0;
    }
    if(n == 0) {
        return 1;
    }

    //recursive call
    int ans = count_stairs(n-1) + count_stairs(n-2);

    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<count_stairs(n);
    return 0;
}