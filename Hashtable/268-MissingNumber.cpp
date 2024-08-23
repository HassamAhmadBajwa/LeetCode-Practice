// problem statement
// https://leetcode.com/problems/missing-number/description/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int Missing(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (int i = 0; i <= arr.size(); i++)
    {
        mp[i]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second == 1)
        {
            return i.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {0, 1, 2};
    int res = Missing(arr);
    cout << res;
}