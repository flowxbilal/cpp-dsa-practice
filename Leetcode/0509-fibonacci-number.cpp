#include <iostream>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if(n == 0)
            return 0;

        if(n == 1)
            return 1;

        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    if(n < 0 || n > 30)
    {
        cout << "Enter a number between 0 and 30.";
        return 0;
    }

    cout << "Fibonacci: " << obj.fib(n);

    return 0;
}