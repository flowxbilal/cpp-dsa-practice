#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    cout<<"the top element is  "<<numbers.top()<<endl;
    numbers.pop();
    cout<<"the new top element is  "<<numbers.top();
    return 0;
}