// Array of Pointers Method : Same as Double Pointer Method only method of declaring and allocating memory is changed

#include<iostream>
using namespace std;

int main()
{
    int m = 3, n=3;
    int *matrix[m];
    for(int i=0; i<n; i++) {
        matrix[i] = new int[n];
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            matrix[i][j] = 10;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}