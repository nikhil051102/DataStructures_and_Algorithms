#include<iostream>
using namespace std;

int Binary_Search(int *arr, int low, int high, int x) {
    int mid = (low+high)/2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if(arr[mid] < x) {
        return Binary_Search(arr, mid+1, high, x);
    } else {return Binary_Search(arr, low, mid-1, x);}
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    cout<<Binary_Search(arr, 0, n-1, 50);
    return 0;
}