#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    queue<int> numbers;
    stack<int> number;

    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50);

    while(!numbers.empty())
    {
        number.push(numbers.front());
        numbers.pop();
    }

    while(!number.empty())
    {
        numbers.push(number.top());
        number.pop();
    }

    while(!numbers.empty())
    {
        cout << numbers.front() << " ";
        numbers.pop();
    }

    return 0;
}