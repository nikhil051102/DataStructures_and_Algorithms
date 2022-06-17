#include<iostream>
#include<vector>
using namespace std;

/*
-> If columns of first matrix and rows of first matrix are equal then only matrices can be multiplied
-> Resultant matrix will have dimensions (rows of first matrix x columns of second matrix) i.e n1xm2
*/

int main()
{
    const int n1 = 3, m1 = 2;
    int matrix1[n1][m1] =  {{4, 8},
                            {0, 2},
                            {1, 6}};
    
    const int n2 = 2, m2 = 2;
    int matrix2[n2][m2] =  {{5, 2},
                            {9, 4}};

    vector<vector <int> > result;
    
    if(m1 != n2) {
        cout<<"Matrix can be multiplied";
    } else {
        //As resultant matrix will have n1 x m2 dimensions
        for(int i = 0; i<n1; i++) {
            vector<int> v;
            for(int j = 0; j<m2; j++) {
                int sum = 0;
                for(int k = 0; k<m1; k++) {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                v.push_back(sum);
            }
            result.push_back(v);
        }
    }

    for(int i = 0; i<n1; i++) {
        for(int j=0; j<m2; j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}