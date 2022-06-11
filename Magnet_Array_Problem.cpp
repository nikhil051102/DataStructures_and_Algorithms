// Link : https://practice.geeksforgeeks.org/problems/magnet-array-problem3743/1
#include<iostream>
using namespace std;

double Neutral_Point(double low, double high, double arr, int n) {
    
}

void Solution(double *arr, int n) {
    double result[n-1];
    for (int i = 0; i < n-1; i++)
    {
        result[i] = Neutral_Point(arr[i], arr[i+1], arr, n);
    }
}

int main()
{
    double arr[] = {0, 10, 20, 30};
    int n = 4;
    Solution(arr, n);
    return 0;
}