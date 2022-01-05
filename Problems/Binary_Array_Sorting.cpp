#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Value of n : ";
    cin>>n;

    int Array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>Array[i];
    }

    int temp;
        if (Array[j+1] < Array[j])
        {
            temp = Array[j+1];
            Array[j+1] = Array[j];
            Array[j] = temp;
        }
    

    for (int k = 0; k < n; k++)
    {
        cout<<Array[k];
    }
    
    return 0;
}