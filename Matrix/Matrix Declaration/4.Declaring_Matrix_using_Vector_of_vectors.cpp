/* Vector of vectors method

Advantages and Disadvantages are same as Array of Vectors method

Major Advantage : 1) As Rows and Columns are dynamically allocated here, so we can easily add or remove elements from this matrix
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m = 3, n= 3;
    vector<vector <int> > matrix;
    for(int i=0; i<m; i++) {
        vector<int> v;
        for(int j=0; j<n; j++) {
            v.push_back(10);
        }
        matrix.push_back(v);
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            matrix[i][j] = 10;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}