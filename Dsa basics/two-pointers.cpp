#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 8, 9, 11};
    int target = 13;

    int left = 0;
    int right = 6;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum == target)
        {
            cout << "Pair found: " << arr[left] << " and " << arr[right];
            return 0;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "No pair found";

    return 0;
}