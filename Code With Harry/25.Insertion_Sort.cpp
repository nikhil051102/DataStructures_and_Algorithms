#include <iostream>
using namespace std;

//Insertion Sort Algorithm.
//1.Total Passes = n-1
//2.Total Comparisons : n(n-1)/2
//3.Worst Case : O(N^2)
//4.Best Case : O(N)
//5.Stable Algorithm.
//6.Adaptive Algorithm.

void Insertion_Sort(int *A, int n)
{

}

void Display(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    } 
}

int main()
{
    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    Display(A, n);
    // Insertion_Sort(A, n);
    return 0;
}
