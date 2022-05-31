#include <iostream>
#include<vector>
using namespace std;

int nthItem(int L1, int L2, int A[], int B[], int N)
    {
        // code here
        vector<int> v;
        for(int i = 0; i<L1; i++) {
            for(int j = 0; j<L2; j++) {
                int sum = A[i] + B[j];
                v.push_back(sum);
            }
        }
        sort( v.begin(), v.end() );
        v.erase( unique( v.begin(), v.end() ), v.end() );
        
        if(N > v.size()) {
            return -1;
        } else {
            return v[N-1];
        }
    }

int main()
{
    int L1 = 5, L2 = 4;
    int A[] = {1, 3, 4, 8, 10};
    int B[] = {20, 22, 30, 40};
    int N = 4;
    cout<<nthItem(L1, L2, A, B, N);
    return 0;
}