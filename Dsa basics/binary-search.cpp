#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 7, 11, 15, 18, 21, 25};
    int target = 15;

    int left = 0;
    int right = 7;
    int index = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if(index != -1)
    {
        cout << "Element found at index " << index;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}