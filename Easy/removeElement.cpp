// problem link
// https://leetcode.com/problems/remove-element/description/

#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    int insertIndex = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[insertIndex] = nums[i];
            insertIndex++;
        }
    }
    return insertIndex;
}
int main()
{
    vector<int> arr = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int result = removeElement(arr, val);
    cout << result;
}