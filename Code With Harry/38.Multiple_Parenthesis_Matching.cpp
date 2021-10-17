#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    char *array;
};


int main()
{
    int n;
    cout << "Number of Characters : ";
    cin >> n;

    char array[n];
    cout<<"Enter Characters : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    

    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = n;
    s->top = -1;
    s->array = (char *)malloc(s->size*sizeof(char));

    // for (int j = 0; j < n; j++)
    // {
    // }
    
    
    return 0;
}