#include <iostream>
using namespace std;

struct Stack
{
    int *array;
    int top;
    int data;
};

int main()
{
    int n;
    cout<<"How many characters you want to input : ";
    cin>>n;

    char characters[n];
    for (int i = 0; i < n; i++)
    {
        cin>>characters[i];
    }
    
    
    return 0;
}