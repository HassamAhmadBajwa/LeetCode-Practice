// problem link
// https://leetcode.com/problems/move-zeroes/description/

#include <iostream>
#include <vector>
using namespace std;
void MoveZero(vector<int> &nums)
{
    int nonZero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonZero] = nums[i];
            nonZero++;
        }
    }
    while (nonZero < nums.size())
    {
        nums[nonZero] = 0;
        nonZero++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 4, 0, 5};
    MoveZero(arr);
}