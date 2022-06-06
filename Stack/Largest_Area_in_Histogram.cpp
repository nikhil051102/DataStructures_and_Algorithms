#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
// Video Link : https://youtu.be/vhUxKxiconE

// Naive Approach : Time Complexity : O(N^2)
int Naive_Approach(int arr[], int n)
{
    //Method 1
    int area = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        int left = i;
        int right = i;
        
        while (arr[left] >= arr[i])
            left--;

        while (arr[right] >= arr[i])
        {
            right++;
        }
        x = (right - left - 1) * arr[i];

        if (x > area)
        {
            area = x;
        }
    }
    return area;


    //Method 2
    // int area=0;
    // for(int i=0;i<n;i++){
    //     int curr=arr[i];
    //     for(int j=i-1;j>=0;j--){
    //         if(arr[j]>=arr[i])curr+=arr[i];
    //         else break;
    //     }
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]>=arr[i])curr+=arr[i];
    //         else break;
    //     }
    //     area=max(area,curr);
    // }
    // return area;
}

int *Previous_Smaller(int arr[], int n)
{
    int *previous = new int[n];
    // static int previous[n]; //https://youtu.be/RWNM7CzDNyY :Go to this video to get the reason wy i used static keyword here.
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            previous[i] = -1;
        }
        else
        {
            previous[i] = s.top();
        }
        s.push(i);
    }
    return previous;
}

int *Next_Smaller(int arr[], int n)
{
    int *next = new int[n];
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            next[i] = -1;
        }
        else
        {
            next[i] = s.top();
        }
        s.push(i);
    }
    return next;
}

// Approach 2 using Stacks
int Using_Stack(int arr[], int n)
{
    // In this previous smaller function we will store index instead of value
    int *prev = Previous_Smaller(arr, n);

    // Same goes Next_Smaller function
    int *nxt = Next_Smaller(arr, n);

    int area = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        x = (nxt[i] - prev[i] - 1) * arr[i];

        if (x > area)
        {
            area = x;
        }
    }
    return area;
}

int main()
{
    int array[] = {6, 2, 5, 4, 5, 1, 6};
    int n = 7;
    cout << "Naive Approach : " << Naive_Approach(array, n) << endl;
    cout << "Using Stacks : " << Using_Stack(array, n);
    return 0;
}