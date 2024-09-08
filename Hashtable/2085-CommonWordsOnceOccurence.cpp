// problem link
// https://leetcode.com/problems/count-common-words-with-one-occurrence/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int commonWordsWithOneOccurence(vector<string> &words1, vector<string> &words2)
{
    unordered_map<string, int> mp;
    int count = 0;
    for (auto str : words1)
    {
        mp[str]++;
        if (mp[str] != 1)
        {
            mp[str] = -1;
        }
    }
    for (auto st : words2)
    {
        if (mp.find(st) != mp.end())
        {

            mp[st]--;
        }
    }
    for (auto e : mp)
    {
        if (e.second == 0)
        {
            count++;
        }
        cout << e.first << " - " << e.second << endl;
    }
    return count;
}
int main()
{
    vector<string> str1 = {"b", "bbb"};
    vector<string> str2 = {"b", "b", "b", "bbb"};
    int res = commonWordsWithOneOccurence(str1, str2);
    cout << res;
}