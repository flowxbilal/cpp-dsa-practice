
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(target > nums[mid])
            {
                start = mid + 1;
            }
            else if(target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                return mid;
            }
        }

        return -1;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    Solution obj;

    int result = obj.search(nums, target);

    cout << "Target index: " << result << endl;

    return 0;
}
