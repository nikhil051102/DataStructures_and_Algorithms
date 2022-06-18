#include<iostream>
using namespace std;

const int R = 4;
const int C = 4;

//Naive Solution : Simply traverse through the matrix and print element's position if found
//Time Complexity : O(R*C)
//Space Complexity : O(1)
// void search(int matrix[R][C], int x) {
//     for(int i = 0; i<R; i++) {
//         for(int j = 0; j<C; j++) {
//             if(matrix[i][j] == x) {
//                 cout<<"Element found at ("<<i<<", "<<j<<")";
//                 return;
//             }
//         }
//     }
//     cout<<"Element not found";
// }



/* Efficient Solution 

--> Bottom Right Approach
-> Begin from Top-Right corner
-> If x is same, print position and return
-> If x is smaller, move left
-> If x is larger, move down


--> Bottom Left Approach
-> Begin from Bottom-Left corner
-> If x is same, print position and return
-> If x is smaller, move up
-> If x is larger, move right
*/
void search(int matrix[R][C], int x) {

    int i = 0;
    int j = C-1;
    while(i<R && j >= 0) {
        if(matrix[i][j] == x) {
            cout<<"Element found at ("<<i<<", "<<j<<")";
            return;
        } else if(matrix[i][j] > x) {
            j--;
        } else {
            i++;
        }
    }
    cout<<"Element not found";
}

int main()
{
    int matrix[4][4] = {{ 10, 20, 30, 40},
                        { 15, 25, 35, 45},
                        { 27, 29, 37, 48},
                        { 32, 33, 39, 50}};

    int x = 29;

    search(matrix, x);
    return 0;
}