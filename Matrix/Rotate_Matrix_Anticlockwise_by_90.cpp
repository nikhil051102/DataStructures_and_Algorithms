#include<iostream>
using namespace std;

const int R = 3;
const int C = 3;

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
void Rotate(int smatrix[R][C]) {

}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};


    // 3 6 9
    // 2 5 8
    // 1 4 7

    //00 01 02
    //10 11 12
    //20 21 22
    Rotate(matrix);
    return 0;
}