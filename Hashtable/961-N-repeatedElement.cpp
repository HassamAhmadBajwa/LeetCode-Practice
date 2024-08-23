// problem link
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int repeated(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] > 1)
        {
            return nums[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5};
    int res = repeated(arr);
    cout << res;
}