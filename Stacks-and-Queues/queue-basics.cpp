#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    cout<<numbers.front()<<"    "<<numbers.back()<<endl;
    numbers.pop();
    cout<<"new front is  "<<numbers.front()<<endl;
    cout<<"the new size is"<<numbers.size();
}