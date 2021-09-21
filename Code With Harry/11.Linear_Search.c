#include <stdio.h>

//Linear Search : This search is feasible in unsorted array.
int Linear_Search(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            printf("Element found at index %d", i);
            return 1;
        }   
    }
    return -1;
}  


int main()
{
    int arr[100] = {56, 34, 23, 87, 97, 53, 30};
    int size = sizeof(arr)/sizeof(int);
    int number = 97;
    Linear_Search(arr, size, number);
    return 0;
}
