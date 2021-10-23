#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *array;
};

int isEmpty(Stack*ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int StackTop(Stack*ptr)
{
    return ptr->array[ptr->top];
}

int Precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isOperator(char ch)
{
    if (ch == '+' || ch =='-' || ch == '*' || ch == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(Stack*sp, char value)
{
    sp->top++;
    sp->array[sp->top] = value;
}

char pop(Stack*sp)
{
    char val = sp->array[sp->top];
    sp->top--;
    return val;
}

char *InfixToPostfix(char *Infix, int n)
{
    struct Stack *sp;
    sp->size = n;
    sp->top = -1;
    sp->array = (char *)malloc(sp->size*sizeof(char));
    
    char *Postfix = (char *)malloc((n+1)*sizeof(char));
    int i = 0;
    int j = 0;

    while (i != n)
    {
        if(!isOperator(Infix[i]))
        {
            Postfix[j] = Infix[i];
            i++;
            j++;
        }
        else
        {
            if (Precedence(Infix[i]) < Precedence(StackTop(sp)))
            {
                push(sp, Infix[i]);
                i++;
            }
            else
            {
                Postfix[i] = pop(sp);
                j++;
            }

        }
        while (!isEmpty(sp))
        {
            Postfix[j] = pop(sp);
            j++;
        }
        
    }
    return Postfix;
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
    cout<<"Number of Characters : ";
    cin>>n;

    char expression[n];
    cout<<"Enter Characters : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>expression[i];
    }

    char *Postfix = InfixToPostfix(expression, n);
    
    return 0;
}