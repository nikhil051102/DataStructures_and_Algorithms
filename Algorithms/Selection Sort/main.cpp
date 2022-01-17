#include<iostream>
using namespace std;

void Selection_Sort(int *array, int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
}

int main()
{
    int array[5] = {3, 5, 2, 13, 12};
    int n=5;
    Selection_Sort(array, n);
    return 0;
}