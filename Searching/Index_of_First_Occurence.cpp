#include <iostream>
using namespace std;

// Naive Approach : Traverse through the array as soon as you find the element return the index.
//  Time Complexity : O(N)
//  Space Complexity : O(1)
int Naive_Approach(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// Efficient Solution : We can solve this Question using Iterative Binary Search
// and Recursive Binary Search but Efficient Solution here is Iterative Search because
// Recursive Search will require O(logN) extra space and unnecessary function calls

// Binary Recursive Search : Time Complexity = O(logN)
int Binary_Recursive_Search(int *arr, int low, int high, int x)
{
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        if (arr[mid - 1] != arr[mid] || mid == 0)
        {
            return mid;
        }
        else
        {
            return Binary_Recursive_Search(arr, low, mid - 1, x);
        }
        return mid;
    }
    else if (arr[mid] < x)
    {
        return Binary_Recursive_Search(arr, mid + 1, high, x);
    }
    else
    {
        return Binary_Recursive_Search(arr, low, mid - 1, x);
    }
}

int Binary_Iterative_Search(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 4, 4, 5};
    int n = 7;
    cout << "Naive Approach = " << Naive_Approach(arr, n, 4) << endl;
    cout << "Binary Recursive Search = " << Binary_Recursive_Search(arr, 0, n - 1, 4) << endl;
    cout<<"Binary Iterative Search = "<<Binary_Iterative_Search(arr, n, 4);
    return 0;
}