#include<iostream>
#include<iomanip>
using namespace std;

//Naive  Approach : Traverse through an array and count no. of duplicates
// Time Complexity : O(N)
// Space Complexity : O(1)
int Naive_Approach(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x) {
            count++;
            if(arr[i+1] != x) {
                break;
            }
        }
    }
    return count;
}

//Second Approach : Spot the element and go to left and right both direction untill you found different elements
//Time Complexity : O(logN + k) where k : no. of occurences and logN to find first occurence
int General_Approach(int *arr, int n, int x) {
    int low = 0;
    int high = n-1;
    int index = -1;
    int count = 0;
    while(low <= high) {
        int mid = (low+high)/2;
        if(arr[mid] < x) {
            low = mid+1;
        } else if(arr[mid] > x) {
            high = mid-1;
        } else {
            index = mid;
            break;
        }
    }
    
    if (index == -1)
    {
        cout<<"Element is not present in array";
    }
    else {
        count++; //for the element we spotted 
        int i = index-1;
        int j = index+1;
        while(arr[i] == x) {
            if(i == 0) {break;}
            count++;
            i--;
        }
        while(arr[j] == x) {
            if(j == n-1) {break;}
            count++;
            j++;
        }
    }
    return count;
}


//Third Approach : Find First and Last ocurrence of element. Use (last-first+1) this will be total number of ocurrences as array is sorted
int First_Ocurrence(int *arr, int n, int x) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid] < x) {
            low = mid+1;
        }
        else if(arr[mid] > x) {
            high = mid-1;
        }
        else {
            if(arr[mid-1] != arr[mid] || mid == 0) {
                return mid;
            } else {high = mid-1;}
        }
    }
    return -1;
}

int Last_Ocurrence(int *arr, int n, int x) {
    int low = 0;
    int high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid] < x) {
            low = mid+1;
        }
        else if(arr[mid] > x) {
            high = mid-1;
        }
        else {
            if(arr[mid+1] != arr[mid] || mid == n-1) {
                return mid;
            } else {low = mid+1;}
        }
    }
    return -1;
}

int Efficient_Solution(int *arr, int n, int x) {
    int First = First_Ocurrence(arr, n, x);
    int Last = Last_Ocurrence(arr, n, x);
    
    if(First == 0 || Last == 0) {return 0;}
    return (Last - First + 1);
}

int main()
{
    int arr[] = {10, 20, 20, 20, 50};
    int n = 5;
    cout<<"Naive Approach : "<<Naive_Approach(arr, n, 20)<<endl;
    cout<<"General Approach : "<<General_Approach(arr, n, 20)<<endl;
    cout<<"Efficient Solution : "<<Efficient_Solution(arr, n, 20);
    return 0;
}