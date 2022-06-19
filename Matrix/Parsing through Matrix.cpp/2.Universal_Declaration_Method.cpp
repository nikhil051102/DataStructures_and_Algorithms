//Here we will declare dimension of matrix as Global variables
#include<iostream>
using namespace std;

const int m = 3;
const int n = 2;

void print(int matrix[m][n]) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int matrix[m][n] = {{1, 2},
                        {3, 4},
                        {5, 6}};
    
    print(matrix);
    return 0;
}