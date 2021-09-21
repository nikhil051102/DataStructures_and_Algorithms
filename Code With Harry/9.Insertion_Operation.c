#include <stdio.h>

//Traversal Operation
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
}

int insertion(int arr[], int size, int number, int index, int capacity)
{
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = size; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = number;
    return 1;
    
}

int main()
{
    int arr[100] = {1, 2, 3, 76};
    display(arr, 4);   //Traversal Operation

    int size = 4, number = 35, index = 2, capacity = 100;
    insertion(arr, size, number, index, capacity);
    size += 1;
    display(arr, size);
    return 0;
}
