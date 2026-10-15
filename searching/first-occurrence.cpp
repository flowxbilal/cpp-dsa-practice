#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int answer = -1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            answer=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return answer;
}

int main()
{
    int arr[8] = {1, 3, 3, 3, 3, 3, 5, 7};
    int n = 8;
    int target = 3;

    cout << "First occurrence: "
         << firstOccurrence(arr, n, target);

    return 0;
}