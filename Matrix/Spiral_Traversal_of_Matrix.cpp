#include<iostream>
using namespace std;

const int R = 4;
const int C = 4;

void spiral_traversal(int matrix[R][C]) { 
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
        int top = 0, left = 0, bottom = R-1, right = C-1;
        while(top <= bottom && left <= right) {
            //Top Row
            for(int i=left; i<=right; i++) {
                cout<<matrix[top][i]<<" ";
            }
            top++;

            //Right Column
            for(int i = top; i<=bottom; i++) {
                cout<<matrix[i][right]<<" ";
            }
            right--;

            if(top <= bottom) {
                //Bottom Row
                for(int i = right; i>=left; i--) {
                    cout<<matrix[bottom][i]<<" ";
                }
                bottom--;
            }

            if(left <= right) {
                //left column
                for(int i = bottom; i>=top; i--) { 
                    cout<<matrix[i][left]<<" ";
                }
                left++;
            }
        }
    }
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9,10,11,12},
                        {13,14,15,16}};

    spiral_traversal(matrix);
    return 0;
}