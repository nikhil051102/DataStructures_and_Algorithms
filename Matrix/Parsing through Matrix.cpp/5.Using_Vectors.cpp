#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> matrix[], int m) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<matrix[i].size(); j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int m = 3, n = 3;
    vector<int> matrix[m];
    for(int i = 0; i<m; i++) {
        for(int j=0; j<n; j++) {
            matrix[i].push_back(10);
        }
    }

    print(matrix, m);
    return 0;
}