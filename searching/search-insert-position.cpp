
#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return start;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 10};
    int target = 7;

    cout << "Insertion index: "
         << searchInsert(arr, target);

    return 0;
}
