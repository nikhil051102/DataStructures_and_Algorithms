#include<iostream>
using namespace std;

//Naive Approach : Traverse through the array and if you found 1 then (sizeofarray - indexof1) will be answer as array is sorted all elements after 1 will be 1
// Time Complexity : O(1)
int Naive_Approach(int *arr, int n) {
    int i = 0;
    while (i < n) {
        if(arr[i] == 1) {
            break;
        }
        i++;
    }
    return n-i;
}

//Binary Search Approach : Find the first ocurrence of 1 if present and apply same formula we applied in naive approach
// Time Complexity : O(logn)
int Binary_Search(int *arr, int n) {
    int low = 0;
    int high = n-1;

    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] == 0) {
            low = mid+1;
        } else {
            if(mid == 0 || arr[mid-1] != arr[mid]) {
                return (n-mid);
            } else {
                high = mid-1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1};
    int n = 7;
    cout<<"Naive Approach : "<<Naive_Approach(arr, n)<<endl;
    cout<<"Binary Search Approach : "<<Binary_Search(arr, n);
    return 0;
}