// problem statement
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < nums2.size(); i++)
    {
        mp[nums2[i]]++;
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        if (mp.find(nums1[i]) != mp.end())
        {
            if (mp[nums1[i]] > 0)
            {
                ans.push_back(nums1[i]);
                mp[nums1[i]]--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 1};
    vector<int> arr2 = {2};
    vector<int> res = intersection(arr1, arr2);
    for (auto e : res)
    {
        cout << e << " ";
    }
}