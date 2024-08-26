// problem statement
// https://leetcode.com/problems/uncommon-words-from-two-sentences/description/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<string> uncommonWrods(string s1, string s2)
{
    map<string, int> mp;
    vector<string> words;
    string p;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == ' ')
        {
            mp[p]++;
            p = "";
        }
        else
        {
            p = p + s1[i];
        }
    }
    mp[p]++;
    p = "";
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == ' ')
        {
            mp[p]++;
            p = "";
        }
        else
        {
            p = p + s2[i];
        }
    }
    mp[p]++;

    for (auto e : mp)
    {
        if (e.second == 1)
        {
            words.push_back(e.first);
        }
    }
    return words;
}
int main()
{

    string s1 = "this is my sweet";
    string s2 = "this is my savour";
    vector<string> res = uncommonWrods(s1, s2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}