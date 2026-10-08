#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr[] = {3, 6, 5, 3, 6, 4, 8, 9, 2};
    int n = 9;

    unordered_set<int> seen;

    for(int i = 0; i < n; i++)
    {
        if(seen.count(arr[i]) == 0)
        {
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }

    return 0;
}