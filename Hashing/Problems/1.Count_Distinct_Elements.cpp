#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int array[5] = {5, 10, 20, 30, 5};

    // 1. Normal Approach
    int res = 1;

    for (int i = 1; i < 5; i++)
    {
        int j=0;
        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
            {
                break;
            }
        }
        if (i == j)
        {
            res++;
        }
    }
    cout<<"Normal Approach : "<<res<<endl;


    //2. Using Sets
    unordered_set<int> s;
    for (int k = 0; k < 5; k++)
    {
        s.insert(array[k]);
    }
    cout<<"Unordered Sets Approach : "<<s.size();
    return 0;
}