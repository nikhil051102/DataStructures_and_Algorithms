#include <iostream>
using namespace std;

//Bubble Sort Algorithm : This algo. compares 2 elements of array and move bigger element to right.
//This algo. is not adaptive by default but we can make it adaptive.
//This algo is Stable algorithm.
//This algo is in-place sorting algorithm.

//Adaptive Algorithm : If the algorithm detects that array is already sorted then it will not perform any operation.
//Stable Algorithm : If two equal elements are compared then algorithm don't change their position.


void PrintArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void AdaptiveBubbleSort(int *A, int n)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n - 1; i++) //For Number of Passes
    {
        cout << "Working on pass Number : " << i + 1 << endl;
        int isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) //For Comparison in Each Pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

void BubbleSort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++) //For Number of Passes
    {
        for (int j = 0; j < n - 1 - i; j++) //For Comparison in Each Pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {76, 32, 45, 98, 20};
    int n = 5;
    cout << "Array Before Bubble Sort : ";
    PrintArray(A, n);
    BubbleSort(A, n); ///Normal Bubble Sort Called
    cout << "Array After Bubble Sort : ";
    PrintArray(A, n);
    return 0;
}
