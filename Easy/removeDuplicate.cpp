// problem statement
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <iostream>
#include <vector>
using namespace std;
int removeDuplicate(vector<int> &nums)
{
    int insertIndex = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] != nums[i])
        {
            nums[insertIndex] = nums[i];
            insertIndex++;
        }
    }
    return insertIndex;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3};
    int result = removeDuplicate(arr);
    cout << result;
}
