#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string str="Bilal";
stack<char>letters;
for(int i=0;i<str.size();i++)
{
    letters.push(str[i]);
}
while(!letters.empty())
{
    cout<<letters.top();
    letters.pop();
}
}