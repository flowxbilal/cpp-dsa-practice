#include <iostream>
using namespace std;

void count(int n)
{
    if(n == 6)
    {
        return;
    }

    cout << n << " ";

    count(n + 1);
}

int main()
{
    count(1);
    return 0;
}