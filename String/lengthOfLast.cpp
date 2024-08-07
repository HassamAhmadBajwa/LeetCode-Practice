// problem link
//  https://leetcode.com/problems/length-of-last-word/

#include <iostream>
using namespace std;
int lastLength(string s)
{
    int count = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {

        if ((s[i] >= 'a' || s[i] >= 'A') && (s[i] <= 'z' || s[i] <= 'Z'))
        {
            count++;
            if (i == 0)
            {
                return count;
            }
            if (s[i - 1] == ' ')
            {
                return count;
            }
        }
    }
    return count;
}
int main()
{
    string s = "s";
    int res = lastLength(s);
    cout << res;
}