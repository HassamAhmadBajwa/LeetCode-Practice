// problem link
// https://leetcode.com/problems/set-mismatch/description/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> findMiss(vector<int> &nums)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 1; i <= nums.size(); i++)
    {
        mp[i] = 0;
    }
    for (auto n : nums)
    {
        mp[n]++;
        if (mp[n] == 2)
        {
            ans.push_back(n);
        }
    }
    for (auto e : mp)
    {
        if (e.second == 0)
        {
            ans.push_back(e.first);
        }
    }

    for (auto e : mp)
    {
        cout << e.first << " - " << e.second << endl;
    }
    return ans;
}
int main()
{
    vector<int> num = {1, 1};
    vector<int> res = findMiss(num);
    for (auto ans : res)
    {
        cout << ans << " ";
    }
}