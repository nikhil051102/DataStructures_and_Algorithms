#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

/*
Approach : Like Naive Algorithm, we slide pattern one by one and Compare has values
           pattern and current text window. If has values match, then only compare
           indivisual characters.

Rabin Karp Algorithm is application of hashing

Spurious Hit : Substring in String whose hashcode is matching but pattern isn't
*/
vector<int> rabin_karp_algorithm(string txt, string patt) {
    vector<int> v;

    int m = txt.length();
    int n = patt.length();
    int hashcode = 0;
    //Calculating sum of ASCII values of all characters of pattern string which is hashcode
    for(int i = 0; i<n; i++) {
        hashcode += int(patt[i])*(pow(10, n-1-i));
    }

    int sum = 0;

    for(int j = 0; j<n; j++) {
        sum += int(txt[j])*(pow(10, n-1-j));
    }

    if(sum == hashcode) {
        v.push_back(0);
    }

    for(int k = 1; k<=m-n; k++) {
        sum = (sum - (int(txt[k-1])*(pow(10, n-1))))*10 + int(txt[k+n-1]);

        if(sum == hashcode) {
            v.push_back(k);
        }
    }

    return v;
}


int main()
{
    string txt = "aaaaa";
    string patt = "aaa";
    vector<int> v = rabin_karp_algorithm(txt, patt);

    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}