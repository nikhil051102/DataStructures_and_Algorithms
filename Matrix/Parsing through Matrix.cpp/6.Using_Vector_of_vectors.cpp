#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int> > &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m = 3, n = 3;
    vector<vector<int> > matrix;

    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(10);
        }
        matrix.push_back(v);
    }

    print(matrix);
    return 0;
}