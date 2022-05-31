// Problem : https://practice.geeksforgeeks.org/problems/even-and-odd/1

#include <iostream>
using namespace std;

void Rearrange(int arr[], int N)
{
    int temp;
    int i = 0;
    do
    {
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 != 0)
        {
            int x = 0;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        i = i + 2;
    } while (i < N);
}

int main(int argc, char const *argv[])
{
    int array[] = {3, 6, 12, 1, 5, 8};
    int N = 6;
    Rearrange(array, N);

    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
