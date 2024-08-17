// link
// https://leetcode.com/problems/contains-duplicate/description/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
bool containDuplicate(vector<int> &arr)
{
    unordered_set<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        if (st.find(arr[i]) != st.end())
        {
            return true;
        }

        st.insert(arr[i]);
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1};
    bool result = containDuplicate(arr);
    cout << result;
}