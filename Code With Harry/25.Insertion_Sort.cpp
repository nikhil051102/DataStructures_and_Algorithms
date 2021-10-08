#include <iostream>
using namespace std;

//Insertion Sort Algorithm.
//1.Total Passes = n-1
//2.Total Comparisons : n(n-1)/2
//3.Worst Case : O(N^2)
//4.Best Case : O(N)
//5.Stable Algorithm.

void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *A, int n)
{

}

int main()
{
    int A[] = {12, 54, 43, 21, 1, 20};
    int n = 6;
    PrintArray(A, n);
    insertionSort(A,n);
    return 0;
}