#include <iostream>
#include<math.h>
using namespace std;

void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

int minimum_coins(int coins[], int n, int amount)
{
    // Step 1 : Sort array in decreasing order
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (coins[i] < coins[j])
            {
                temp = coins[i];
                coins[i] = coins[j];
                coins[j] = temp;
            }
        }
    }

    int result = 0;
    int c;

    for(int k = 0; k < n; k++) {
        if(coins[k] <= amount) {
            c = floor(amount/coins[k]);
            result = result+c;
        }
        amount = amount - (c*coins[k]);
        if(amount == 0) {
            break;
        }
    }

    return result;
}

int main()
{
    int array[] = {5, 10, 2, 1};
    cout<<minimum_coins(array, 4, 57);
    return 0;
}