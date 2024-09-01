// problem link
// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int ele;
    int maj = 0;
    unordered_map<int, int> mp;
    for (auto n : nums)
    {
        mp[n]++;
    }
    for (auto e : mp)
    {
        if (e.second > maj)
        {
            maj = e.second;
            ele = e.first;
        }
    }

    return ele;
}
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int result = majorityElement(arr);
    cout << result;
}