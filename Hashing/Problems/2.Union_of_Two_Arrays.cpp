#include<iostream>
#include<unordered_set>
using namespace std;

//Problem : You are givesn two array. you have return total number of element in array after their union.

int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[4] = {3, 4, 6, 10};

    unordered_set<int> s;

    for (int i = 0; i < 5; i++)
    {
        s.insert(array1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        s.insert(array2[i]);
    }
    
    cout<<"Number of Elements in Array after Union : "<<s.size();
    return 0;
}