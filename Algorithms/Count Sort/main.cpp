#include<iostream>
using namespace std;

void MergeSort(int*Array, int n)
{
    //Finding Maximum Element
    int max_element=0;
    for (int i = 0; i < n; i++)
    {
        if (Array[i] > max_element)
        {
            max_element = Array[i];
        }
    }
    
    //Making new Array of size equal to max element of given array.
    int *newArray = (int*)malloc((max_element+1)*sizeof(int));      //We are doing Dynamic Allocation here so that we can delete this array later.
    for (int i = 0; i < max_element; i++)
    {
        newArray[i] = 0;
    }
    
    //Looping through the given array and incrementing the count by +1 of newArray at the index of the element.
    for (int i = 0; i < n; i++)
    {
        newArray[Array[i]] += 1;
    }
    
    //We are not going to make new Array to store elements in sorted instead of it we are going to modify the values of given
    int i=0;
    int x=0;
    while (i<max_element+1)
    {
        if (newArray[i] == 0)
        {
            x += 0;
            i++;
        }
        else if (newArray[i] == 1)
        {
            Array[x] = i;
            x++;
            newArray[i] -= 1;
            i++;
        }
        else if (newArray[i] > 1)
        {
            Array[x] = i;
            x++;
            newArray[i] -= 1;
        }
    }
    //Deleting newArray of size max_element because we have no use of it now.
    delete[] newArray;
}

int main()
{
    int a[8] = {3, 1, 9, 7, 1, 2, 4, 1};
    int n=8;
    MergeSort(a, n);
    cout<<"Array after count Sort : ";
    for (int j = 0; j < n; j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}