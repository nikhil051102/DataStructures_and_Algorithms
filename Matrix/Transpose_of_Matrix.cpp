#include<iostream>
using namespace std;

const int R = 4;
const int C = 4;


//Naive Solution
/*
void Transpose(int matrix[R][C]) {
    int temp[R][C];
    for(int i = 0; i<R; i++) {
        for(int j = 0; j<C; j++) {
            temp[i][j] = matrix[j][i];
        }
    }

    for(int i = 0; i<R; i++) {
        for(int j = 0; j<C; j++) {
            matrix[i][j] = temp[i][j];
        }
    }

    for(int a = 0; a<R; a++) {
        for(int b = 0; b<C; b++) {
            cout<<matrix[a][b]<<"  ";
        }
        cout<<endl;
    }
}
*/


//Efficient Solution
void Transpose(int matrix[R][C]) {
    int x = 0, y = 0;
    int temp;
    while(x < R) {
        for(int i = x+1; i<R; i++) {
            temp = matrix[x][i];
            matrix[x][i] = matrix[i][x];
            matrix[i][x] = temp;
        }
        x++;
    }

    for(int a = 0; a<R; a++) {
        for(int b = 0; b<C; b++) {
            cout<<matrix[a][b]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    int matrix[4][4] = {{ 1,  2,  3,  4},
                        { 5,  6,  7,  8},
                        { 9, 10, 11, 12},
                        {13, 14, 15, 16}};

    // 00 01 02 03
    // 10 11 12 13
    // 20 21 22 23
    // 30 31 32 33

    Transpose(matrix);
    return 0;
}