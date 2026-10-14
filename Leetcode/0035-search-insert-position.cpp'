
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
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
};

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    Solution obj;

    int result = obj.searchInsert(nums, target);

    cout << "Insertion index: " << result;

    return 0;
}
