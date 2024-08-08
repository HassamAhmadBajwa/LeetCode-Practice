// problem link
// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        int val = nums[i];
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == val)
            {
                count++;
                if (count > nums.size() / 2)
                {
                    return val;
                }
            }
        }
    }
    return 0;
}
int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 2, 2, 1, 1, 3, 3, 3, 3, 3, 3, 3};
    int result = majorityElement(arr);
    cout << result;
}