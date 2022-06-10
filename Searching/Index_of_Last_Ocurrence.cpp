#include<iostream>
using namespace std;

//Naive Approach : Traverse the array in reverse order.
// Time Complexity = O(N)
// Space Complexity = O(1)
int Naive_Approach(int *arr, int n, int x) {
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

//Recursive Binary Search
//Time Complexity = O(logN)
//Space Complexity = O(logN)
int Recursive_Binary_Search(int *arr, int low, int high, int x, int n) {
    int mid = (low+high)/2;
    if (arr[mid] < x)
    {
        return Recursive_Binary_Search(arr, mid+1, high, x, n);
    }
    else if (arr[mid] > x) {
        return Recursive_Binary_Search(arr, low, mid-1, x, n);
    }
    else {
        if(arr[mid] != arr[mid+1] || mid == n-1) {
            return mid;
        }
        return Recursive_Binary_Search(arr, mid+1, high, x, n);
    }
    return -1;
}


//Iterative Binary Search 
int Iterative_Binary_Search(int *arr, int n, int x) {
    int low = 0;
    int high = n-1;
    while (low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] < x) {
            low = mid+1;
        } else if(arr[mid] > x) {
            high = mid - 1;
        }
        else {
            if(arr[mid] != arr[mid+1] || mid == n-1) {
                return mid;
            }
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 6};
    int n = 7;
    cout<<"Naive Approach : "<<Naive_Approach(arr, n, 4)<<endl;
    cout<<"Recursive Binary Search : "<<Recursive_Binary_Search(arr, 0, n-1, 4, n)<<endl;
    cout<<"Iterative Binary Search : "<<Iterative_Binary_Search(arr, n, 4);
    return 0;
}