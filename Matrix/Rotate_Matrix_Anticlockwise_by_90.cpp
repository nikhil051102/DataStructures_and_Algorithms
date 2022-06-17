#include<iostream>
using namespace std;

const int R = 4;
const int C = 4;

/*
Naive Solution : Last Column becomes First Row, Second Last Colummn becomes Second Row and so on....
Time Complexity = O(n^2)
Space Complexity = O(n^2)
*/
// void Rotate(int matrix[R][C]) {
//     int temp[R][C];
//     for(int i = 0; i<R; i++) {
//         for(int j = 0; j<C; j++){
//             temp[C-j-1][i] = matrix[i][j];
//         }
//     }

//     for(int i = 0; i<R; i++) {
//         for(int j=0; j<C; j++) {
//             matrix[i][j] = temp[i][j];
//         }
//     }

//     //Traversal
//     for(int i = 0; i< R; i++) {
//         for(int j=0; j<C; j++) {
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




/*
Efficient Solution : Make Tranpose of Given Matrix and then Reverse Rows i.e Last Row becomes first Row, Second Last Row becomes Second Row
Time Complexity : O(n^2)
Space Complexity : O(1)
*/
void Rotate(int matrix[R][C]) {
    //Tranpose of Matrix
    int n = R;
    int x = 0;
    int temp1;
    while(x < n) {
        for(int i = x+1; i<n; i++) {
            temp1 = matrix[x][i];
            matrix[x][i] = matrix[i][x];
            matrix[i][x] = temp1;
        }
        x++;
    }

    //Reverse Rows
    int no_of_operations = (n/2);
    int i = 0;
    int temp2;
    do
    {
        //Swapping elements of 1st row with last row
        int j = 0;
        while(j<n) {
            temp2 = matrix[i][j];
            matrix[i][j] = matrix[n-1-i][j];
            matrix[n-1-i][j] = temp2;
            j++;
        }
        i++;
    } while (i < no_of_operations);
    

    //
    for(int a = 0; a<n; a++) {
        for(int b = 0; b<n; b++) {
            cout<<matrix[a][b]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    // int matrix[3][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}};
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9,10,11,12},
                        {13,14,15,16}};

    // 3 6 9
    // 2 5 8
    // 1 4 7

    //00 01 02
    //10 11 12x
    //20 21 22
    Rotate(matrix);
    return 0;
}