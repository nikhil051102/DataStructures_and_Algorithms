// Problem Statement : https://www.codingninjas.com/codestudio/problems/rat-in-a-maze_1215030
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int> > v;
    {
        {1, 0, 0, 0}, 
        {1, 1, 0, 0}, 
        {1, 1, 0, 0}, 
        {0, 1, 1, 1}
    };
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}