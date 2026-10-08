#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
    string str = "abcabcbb";

    unordered_set<char> seen;

    int left = 0;
    int maxLength = 0;

    for(int right = 0; right < str.length(); right++)
    {
        while(seen.count(str[right]))
        {
            seen.erase(str[left]);
            left++;
        }

        seen.insert(str[right]);

        int length = right - left + 1;

        if(length > maxLength)
        {
            maxLength = length;
        }
    }

    cout << "Longest substring length = " << maxLength;

    return 0;
}