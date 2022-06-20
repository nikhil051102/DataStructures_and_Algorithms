//Declaring Matrix using Double Pointer Method

/*
Advantages : 1) We can declare rows of different size.

Disadvantages : 1) Rows will not be at Contiguos location so this method is not cache friendly.
*/

#include<iostream>
using namespace std;

int main()
{
    int m = 3, n = 3;
    int **matrix;
    matrix = new int*[m];
    for(int i=0; i<m; i++) {
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