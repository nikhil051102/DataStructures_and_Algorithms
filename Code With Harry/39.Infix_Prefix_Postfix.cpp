#include <iostream>
#include <string>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *array;
};

char * InfixToPostfix(char *infix, int n)
{
}

int main()
{
    //Notations to write an Expressions.
    //1) Infix : operand <operator> operand
    //          a)a+b b)p/q c)a-b d)x-4
    //2) Prefix : <operator> operand1 operand2
    //          +ab, -pq, /xy
    //3) Postfix : operand1 operand2 <operator>
    //          ab+, pq-, xy/

    int n;
    char infix[n];
    cout<<"Infix Expression : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>infix[i];
    }

    return 0;
}