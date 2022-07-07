#include<iostream>
#include<string>
#include<stack>
using namespace std;

//Naive Approach : Create a stack. Push words one by one into the stack. Pop words from stack and append to the output
//Space Complexity : O(N)
// string reverse(string s) {
//     stack<string> st;
//     string result;
//     int j = 0;
//     int i = 0;
//     while(i<s.length()+1) {
//         if(s[i] == ' ' || i == s.length()) {
//             st.push(s.substr(j, i-j));
//             j = i+1;
//         }
//         i++;
//     }

//     while(!st.empty()) {
//         result += st.top();
//         result += " ";
//         st.pop();
//     }
//     return result;
// }



//Efficient Solution : Reverse the individual words then reverse whole string
// string efficient(string s) {

//     //Reversing the words
//     int j = 0;
//     int i = 0;
//     while(i<s.length()+1) {
//         if(s[i] == ' ' || i == s.length()) {
//             for(int k = 0; k < (i-j)/2 +1; k++) {
//                 char temp = s[j];
//                 s[j] = s[i-1-k];
//                 s[i-1-k] = temp;
//                 j++;
//             }
//             j = i+1;
//         }
//         i++;
//     }

//     //Now reversing the whole string
//     int x = 0;
//     int y = 0;
//     while(x < s.length()/2) {
//         char temp2 = s[x];
//         s[x] = s[s.length() - 1 - x];
//         s[s.length() - 1 - x] = temp2;

//         x++;
//     }
//     return s;
// }

int main()
{
    string s = "Nikhil Vijay Deore";
    // cout<<reverse(s);
    // cout<<efficient(s);
    return 0;
}