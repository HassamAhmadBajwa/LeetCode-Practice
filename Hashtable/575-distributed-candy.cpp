// problem link
// https://leetcode.com/problems/distribute-candies/description/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int distributedCandy(vector<int> &nums)
{
    int max = nums.size() / 2;
    set<int> st;
    for (int i = 0; i < nums.size(); i++)
    {
        st.insert(nums[i]);
    }
    if (st.size() == max)
    {
        return max;
    }
    else if (st.size() < max)
    {
        max = st.size();
        return max;
    }
    return max;
}
int main()
{
    vector<int> arr = {1, 1, 1, 1};
    int res = distributedCandy(arr);
    cout << res;
}