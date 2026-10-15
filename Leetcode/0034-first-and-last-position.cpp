
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int firstOccurrence(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int answer = -1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target)
            {
                answer = mid;
                end = mid - 1;
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

        return answer;
    }

    int lastOccurrence(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int answer = -1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target)
            {
                answer = mid;
                start = mid + 1;
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

        return answer;
    }

    vector<int> searchRange(vector<int>& nums, int target)
    {
        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);

        return {first, last};
    }
};

int main()
{
    vector<int> nums = {1, 3, 3, 3, 3, 3, 5, 7};
    int target = 3;

    Solution obj;

    vector<int> result = obj.searchRange(nums, target);

    cout << "First occurrence: " << result[0] << endl;
    cout << "Last occurrence: " << result[1] << endl;

    return 0;
}
