// problem statement
// https://leetcode.com/problems/intersection-of-two-arrays/submissions/1368946679/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i = 0; i < nums1.size(); i++)
    {
        mp[nums1[i]] = 1;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if (mp.find(nums2[i]) != mp.end())
        {
            mp[nums2[i]]++;
        }
    }
    for (auto e : mp)
    {
        cout << e.first << " - " << e.second << endl;
        if (e.second > 1)
        {
            ans.push_back(e.first);
        }
    }
    return ans;
}
int main()
{
    vector<int> nums1 = {4, 7, 9, 7, 6, 7};
    vector<int> nums2 = {5, 0, 0, 6, 1, 6, 2, 2, 4};
    vector<int> res = intersection(nums1, nums2);
    for (auto e : res)
    {
        cout << e << " ";
    }
}