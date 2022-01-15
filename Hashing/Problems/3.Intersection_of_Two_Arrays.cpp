#include<iostream>
#include<unordered_set>
using namespace std;

//Problem : Return the number of elements in array after intersection of two arrays.

int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[4] = {3, 4, 6, 10};

    unordered_set<int> s;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array2[i] == array1[j])
            {
                s.insert(array1[i]);
            }
        }
    }
    
    cout<<"Number of Elements after Intersection of Two Arrays : "<<s.size();
    return 0;
}