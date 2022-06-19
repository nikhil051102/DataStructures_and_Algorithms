#include<iostream>
using namespace std;


//Problem in this method is that we can only print matrix of always fix size here its 3x2 because these arguments are not variables
void print1(int matrix[3][2]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Cpp allows us to declare matrix using first dimension as omitted but this is not convenient method to solve this problem
void print2(int matrix[][2], int m) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<2; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int matrix[3][2] = {{1, 2},
                        {3, 4},
                        {5, 6}};

    print1(matrix);
    cout<<endl;
    print2(matrix, 3);
    cout<<endl;
    return 0;
}