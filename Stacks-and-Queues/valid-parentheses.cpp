#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str = "[{()}]";
    stack<char> brackets;

    for(int i = 0; i < str.size(); i++)
    {
        char c = str[i];

        if(c == '(' || c == '{' || c == '[')
        {
            brackets.push(c);
        }
        else
        {
            if(brackets.empty())
            {
                cout << "Invalid";
                return 0;
            }

            if((c == ')' && brackets.top() == '(') ||
               (c == '}' && brackets.top() == '{') ||
               (c == ']' && brackets.top() == '['))
            {
                brackets.pop();
            }
            else
            {
                cout << "Invalid";
                return 0;
            }
        }
    }

    if(brackets.empty())
    {
        cout << "Valid";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}