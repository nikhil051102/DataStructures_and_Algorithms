#include <iostream>
using namespace std;

void Insertion_Sort(int *array, int n)
{
    int key, j;
    //Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = array[i];
        j = i-1;

        //Loop for each pass
        while (j>=0 && array[j] > key)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int a[5] = {91, 2, 77, 7, 3};
    int n=5;

    Insertion_Sort(a, n);
    return 0;
}