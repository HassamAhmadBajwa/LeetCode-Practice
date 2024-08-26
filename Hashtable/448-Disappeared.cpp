// problem link
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> disappeared(vector<int> &nums)
{
    unordered_map<int, int> mp;
    vector<int> ar;
    for (int i = 1; i <= nums.size(); i++)
    {
        mp[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for (auto ele : mp)
    {
        if (ele.second == 0)
        {
            ar.push_back(ele.first);
        }
    }
    return ar;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 7, 4, 7, 1};
    vector<int> res = disappeared(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}