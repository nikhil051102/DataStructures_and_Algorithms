#include<iostream>
using namespace std;

/* 
a) Elements of matrix are also stored in contiguos location.
There are two types while storing elements at contiguos location
1) Row-Major Order : Elements are stored row wise like [1, 2, 3, 4, 5, 6, 7, 8, 9]
2) Column-Major Order : Elements are stored column wise like [1, 4, 7, 2, 5, 8, 3, 6, 9]

b) We can declare below matrix as matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}

c) Only the first dimension can be omitted when we initialize matrix other dimension are must to declare
matrix[][3] = {{1,2}{3, 4}}
*/ 

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    //Traversing Through Matrix
    for (int i = 0; i < 3; i++)   //Rows Traversing
    {
        for (int j=0; j<3; j++) {   //Column Traversing
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}