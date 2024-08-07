// problem link
// https://leetcode.com/problems/string-to-integer-atoi/description/

#include <iostream>
using namespace std;

int stringToInteger(string s)
{
    int i = 0;
    while (s[i] == ' ')
    {
        i++;
    }
    int negative = 0;
    int positive = 0;
    double res = 0;
    int maxInt = 2147483647;
    int minInt = -2147483647;
    if (s[i] == '-')
    {
        negative++;
        i++;
    }
    else if (s[i] == '+')
    {
        positive++;
        i++;
    }

    while (i < s.size() && s[i] >= '0' && s[i] <= '9')
    {
        res = res * 10 + (s[i] - '0');
        i++;
    }

    if (negative > 0)
    {
        res = -res;
    }
    if (negative > 0 && positive > 0)
    {
        return 0;
    }
    if (res > maxInt)
    {
        res = maxInt;
    }
    else if (res < minInt)
    {
        res = minInt;
    }

    return res;
}
int main()
{
    string s = "123";
    int result = stringToInteger(s);
    cout << result;
}
