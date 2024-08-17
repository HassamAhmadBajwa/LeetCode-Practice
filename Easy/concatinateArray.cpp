// problem link
// https://leetcode.com/problems/concatenation-of-array/description/

#include <iostream>
#include <vector>
using namespace std;

vector<int> concatinateArray(vector<int> &nums)
{
    vector<int> ans = nums;
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> res = concatinateArray(arr);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
}