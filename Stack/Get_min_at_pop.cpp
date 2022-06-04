#include <iostream>
#include <stack>
using namespace std;

stack<int> pushNumbers(int arr[], int n)
{
    // your code here
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
    }
    return s;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{
    // your code here
    int n = s.size();
    int array[n];

    for (int i = 0; i < n; i++)
    {
        array[i] = s.top();
        s.pop();
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (array[k] < array[j])
            {
                array[j] = array[k];
            }
        }
    }

    for (int x = 0; x < n; x++)
    {
        cout << array[x] << " ";
    }
}

int main()
{
    int N = 7;
    int A[] = {1, 6, 43, 1, 2, 0, 5};
    stack<int>s = pushNumbers(A, N);
    _getMinAtPop(s);
    return 0;
}