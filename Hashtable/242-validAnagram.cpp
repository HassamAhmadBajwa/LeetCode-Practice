// problem statement
// https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
bool checkAnagram(string s1, string s2)
{
    unordered_map<char, int> mp;
    for (auto c1 : s1)
    {
        mp[c1]++;
    }
    for (auto c2 : s2)
    {
        if (mp.find(c2) == mp.end())
        {
            return false;
        }
        else
        {
            mp[c2]--;
        }
    }
    for (auto ele : mp)
    {
        if (ele.second != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "anagram";
    string s2 = "nagarm";
    bool res = checkAnagram(s1, s2);
    cout << res;
}