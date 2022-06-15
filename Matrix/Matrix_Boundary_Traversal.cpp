#include<iostream>
using namespace std;

//Print only Border elements of matrix


//Time Complexity = O(R+C)
void Boundary_Traversal(int matrix[3][3]) {
    int R = 3, C = 3;
    //When single ROw is present in Matrix
    if(R==1) {
        for(int i = 0; i<C; i++) {
            cout<<matrix[0][i]<<" ";
        }
    }
    else if(C==1) {
        for(int i = 0; i<R; i++) {
            cout<<matrix[i][0]<<" ";
        }
    }
    else {
        //First Row
        for(int i = 0; i<C; i++) {
            cout<<matrix[0][i]<<" ";
        }
        //Last Column
        for(int i = 1; i< R; i++) {
            cout<<matrix[i][C-1]<<" ";
        }
        //Last Row
        for(int i=C-2; i>=0; i--) {
            cout<<matrix[R-1][i]<<" ";
        }
        //First Column
        for(int i = R-2; i>=1; i--) {
            cout<<matrix[i][0]<<" ";
        }
    }
}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    Boundary_Traversal(matrix);
    return 0;
}