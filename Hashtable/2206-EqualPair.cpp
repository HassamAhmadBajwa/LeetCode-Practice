// problem link
// https://leetcode.com/problems/divide-array-into-equal-pairs/description/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
bool equalPair(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int count;
    for (auto n : nums)
    {
        mp[n]++;
        if (mp[n] % 2 == 0)
        {
            count++;
        }
    }
    for (auto e : mp)
    {
        if (e.second % 2 == 1)
        {
            return false;
        }
        cout << e.first << " - " << e.second << endl;
    }
    return true;
}
int main()
{
    vector<int> nums = {3, 2, 3, 2, 2, 2};
    bool res = equalPair(nums);
    cout << res;
}