#include <iostream>
using namespace std;

int main()
{
    string phrase= "ABAAABCDBBABCDDEBCABC";
    string text = "ABC";
    for(int i=0; i<=(phrase.length() - text.length()); i++)
    {
        if(phrase.substr(i, text.length()) == text) 
        {
            cout<<"Found at Index : "<<i<<endl;
        }
    }
    return 0;
}