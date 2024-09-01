// link
// https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
bool containDuplicate(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (auto ar : arr)
    {
        mp[ar]++;
        if (mp[ar] >= 2)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    bool result = containDuplicate(arr);
    cout << result;
}