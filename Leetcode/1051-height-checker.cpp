
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int heightChecker(vector<int>& heights)
    {
        vector<int> expected = heights;
        int n = heights.size();

        // Insertion Sort
        for(int i = 1; i < n; i++)
        {
            int key = expected[i];
            int j = i - 1;

            while(j >= 0 && expected[j] > key)
            {
                expected[j + 1] = expected[j];
                j--;
            }

            expected[j + 1] = key;
        }

        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(heights[i] != expected[i])
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    vector<int> heights = {1, 1, 4, 2, 1, 3};

    Solution obj;

    int result = obj.heightChecker(heights);

    cout << "Different positions: " << result;

    return 0;
}
