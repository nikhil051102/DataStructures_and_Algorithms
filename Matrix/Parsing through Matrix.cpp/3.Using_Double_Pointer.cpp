#include<iostream>
using namespace std;

void print(int **matrix, int m, int n) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int m = 3, n= 3;
    int **matrix;
    matrix = new int*[m];

    for(int i = 0; i<m; i++) {
        matrix[i] = new int[n];
        for(int j=0; j<n; j++) {
            matrix[i][j] = 10;
        }
    }

    print(matrix, m, n);
    return 0;
}