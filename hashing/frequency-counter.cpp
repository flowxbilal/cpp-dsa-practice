#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {4, 7, 2, 9, 4, 7, 4};
    int n = 7;

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for(auto x : freq)
    {
        cout << x.first << " appears "
             << x.second << " times" << endl;
    }

    return 0;
}