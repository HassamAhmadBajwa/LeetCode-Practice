// problem link
// https://leetcode.com/problems/max-consecutive-ones/description/

#include <iostream>
#include <vector>
using namespace std;
int maxOnes(vector<int> &nums)
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
            }
            count = 0;
        }
    }
    if (max < count)
    {
        max = count;
    }
    return max;
}
int main()
{
    vector<int> arr = {1, 0, 1, 1, 0, 1};
    int res = maxOnes(arr);
    cout << res;
}