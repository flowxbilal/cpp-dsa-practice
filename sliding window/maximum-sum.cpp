#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n = 9;
    int k = 4;

    int sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    int maxsum = sum;

    for(int i = 0; i < n - k; i++)
    {
        sum = sum - arr[i] + arr[i + k];

        if(sum > maxsum)
        {
            maxsum = sum;
        }
    }

    cout << "Maximum sum is " << maxsum;

    return 0;
}