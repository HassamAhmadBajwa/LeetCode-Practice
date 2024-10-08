// link
// https://leetcode.com/problems/roman-to-integer/

#include <iostream>
using namespace std;
// function to check roman to integer value;
int num(char c)
{
    if (c == 'I')
    {
        return 1;
    }
    else if (c == 'V')
    {
        return 5;
    }
    else if (c == 'X')
    {
        return 10;
    }
    else if (c == 'L')
    {
        return 50;
    }
    else if (c == 'C')
    {
        return 100;
    }
    else if (c == 'D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}

// function to return roman to  integer value ;
int romanToInteger(string s)
{
    int sum = 0;
    int i = 0;
    while (i < s.size() - 1)
    {
        if (num(s[i]) < num(s[i + 1]))
        {
            sum -= num(s[i]);
        }
        else
        {
            sum += num(s[i]);
        }
        i++;
    }
    sum += num(s[s.size() - 1]);
    return sum;
}

int main()
{
    string s = "XiX";
    int result = romanToInteger(s);
    cout << result;
}