//Q) An integer has sequential digits if and only if each digit in the number is one more than
// the previous digit.Return a sorted list of all the Integers in the range[low, high] 
// inclusive that have sequential digits.


/* Approach : 
Step 1 : Iterate a loop from N1 to N2
Step 2 : Calculate the length of digit
Step 3 : Calculate last digit, second last and so on...and push digits in vector 
Step 4 : Check for v[i] - v[i+1] is true if not break; from the loop
*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int digits(int n)
{
    int number_of_digits = 0;
    do
    {
        ++number_of_digits;
        n = n / 10;
    } while (n != 0);
    return number_of_digits;
}

int main()
{
    vector<int> answer;
    int N1 = 100;
    int N2 = 1000;
    while (N1 != N2)
    {
        vector<int> v(0);
        int length = digits(N1);
        int i = 0;
        int x = N1;
        while (i < length)
        {

            v.push_back((x % 10));
            x = x / 10;
            i++;
        }
        int y = 0;
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (v[j] - v[j + 1] == 1)
            {
                y++;
            }
            else
            {
                break;
            }
        }

        if (y == v.size() - 1)
        {
            answer.push_back(N1);
        }
        N1++;
    }
    for (int k = 0; k < answer.size(); k++)
    {
        cout << answer[k] << " ";
    }
    return 0;
}