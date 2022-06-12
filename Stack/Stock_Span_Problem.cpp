#include<iostream>
using namespace std;

//span : Number of consecutive days on left which have value less than or equal to current day.
//If array is in increasing order then span will also be in increasing order
//If array is in decreasing order then value of all element will be 1.

//Time Complexity of Below Solution : 1) Worst : O(N^2) when array is sorted in increasing order
void stock_span(int arr[], int n) {
    int ans[n];
    for(int i=0; i<n; i++) {
        int span = 1;
        for (int j = i-1; j >= 0 && arr[j] <= arr[i]; j--)
        {
                span++;
        }
        ans[i] = span; 
    }

    for (int k = 0; k < n; k++)
    {
        cout<<ans[k]<<" ";
    }
    
}

//Time Complexity of below solution : 1) O(N)
void stock_span_efficient_solution(int arr[], int n) {
    int greater = arr[0];
    int index_of_greater = 0;
    int ans[n];
    ans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > greater) {
            greater = arr[i];
            index_of_greater = i;
            ans[i] = i+1;
        } else {
            ans[i] = i - index_of_greater;
        }
    }
    
    for (int k = 0; k < n; k++)
    {
        cout<<ans[k]<<" ";
    }
}

int main()
{
    int arr[] = {13, 15, 12, 14, 16, 8, 6, 4, 10, 30};
    int n = 10;
    stock_span(arr, n);
    cout<<endl;
    stock_span_efficient_solution(arr, n);
    return 0;
}