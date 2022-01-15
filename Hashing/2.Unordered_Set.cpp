/*
Unordered Set -> It is collection of "Unique" elements. If we try to insert duplicate element in it then currently present element is overwritten.
              -> It contains same type of elements.


List of Function in Unordered Set :-
1) insert() : used to insert elements.
2) find() : returns iterator which is pointing to that element if it present in set.
3) end() : This pointer is present after last element of set.
4) begin() : Iterator pointing to first element of set.
5) clear() : removes all the elements.
6) size() : returns the number of elements present.
7) count() : return the count of How many times the element is present in set. Generally, it is used to check whether element is present or not.
8) erase() : used to remove particular element.
*/

#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);

    if (s.find(200) == s.end())
    {
        cout<<"Element Not Found "<<endl;
    }
    else
    {
        cout<<"Element is present"<<endl;
    }

    for(auto it=s.begin(); it != s.end(); it++)
    {
        cout<<(*it)<<" ";
    }

    cout<<endl<<"Total Number of Elements : "<<s.size()<<endl;

    if (s.count(30) == 1)
    {
        cout<<"30 is present in set"<<endl;
    }
    else
    {
        cout<<"30 is not present in set"<<endl;
    }


    s.erase(50);
    s.erase(s.begin(), s.end());             //This will clear all the elements present in set.
    cout<<s.size();
    return 0;
}