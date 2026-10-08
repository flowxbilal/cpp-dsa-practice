#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {3, 6, 5, 2, 9, 1};
    int target = 8;
    int n = 6;

    unordered_map<int, int> seen;

    for(int i = 0; i < n; i++)
    {
        int needed = target - arr[i];

        if(seen.count(needed))
        {
            cout << "Pair found at indexes "
                 << seen[needed] << " and " << i;

            return 0;
        }

        seen[arr[i]] = i;
    }

    cout << "No pair found";

    return 0;
}