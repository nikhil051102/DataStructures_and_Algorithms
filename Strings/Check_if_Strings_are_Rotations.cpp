#include<iostream>
#include<string>
using namespace std;

//Naive Solution : Rotate string anticlockwise and check if it matches or not

// bool rotations(string s1, string s2) {

// }

//Efficient Solution : Concatenate string s1 with itself and use find function to find pattern in s1 + s2
bool efficient_solution(string s1, string s2) {
    if(s1.length() != s2.length()) {return false;}

    return ((s1+s1).find(s2) != string::npos);
}

int main()
{
    string s1 = "ABCD";
    string s2 = "CDAB";

    // rotations(s1, s2);
    efficient_solution(s1, s2);
    return 0;
}