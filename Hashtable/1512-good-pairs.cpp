// problem link
// https://leetcode.com/problems/number-of-good-pairs/description/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int goodPairs(vector<int> &nums)
{
    int count = 0;
    unordered_map<int, int> mp;
    for (auto n : nums)
    {
        mp[n]++;
    }
    for (auto e : mp)
    {
        if (e.second > 1)
        {
            count = count + e.second * (e.second - 1) / 2;
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {1, 1, 1, 1, 1, 2, 2};
    int res = goodPairs(arr);
    cout << res;
}