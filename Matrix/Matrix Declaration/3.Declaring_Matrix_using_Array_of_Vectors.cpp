/* Array of Vectors 

Advantages : 
1) Rows are dynamically allocated so rows can be of dynamic sizes so we add/remove elements from these rows
2) Easy to pass to a function.

Disadvantages :
1) Not Cache Friendly : Vector will dynamically allocate memory to rows so they will not at contiguos location therefore this is not cache friendly method
2) 
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int m = 3, n = 3;
    vector<int> matrix[m];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            matrix[i].push_back(10);
        }
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