// problem link
// https://leetcode.com/problems/longest-palindrome/

#include <iostream>
#include <unordered_map>
using namespace std;

int longPalindrome(string s)
{
    int ans = 0;
    unordered_map<char, int> mp;
    if (s.size() == 1)
    {
        return 1;
    }
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for (auto e : mp)
    {
        if (e.second % 2 == 1)
        {
            e.second--;
        }
        ans = ans + e.second;
    }
    if (s.size() > ans)
    {
        return ans + 1;
    }

    return ans;
}
int main()
{
    string str = "abccccdd";

    int res = longPalindrome(str);
    cout << res;
}