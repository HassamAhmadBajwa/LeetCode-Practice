// problem link
//  https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include <iostream>
#include <vector>

using namespace std;
vector<int> searchRange(vector<int> arr, int target);
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 6};
    int target = 6;
    vector<int> result = searchRange(arr, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
vector<int> searchRange(vector<int> arr, int target)
{
    vector<int> arr2;
    vector<int> arr3;
    for (int i = 0; i < arr.size(); i++)
    {

        if (arr[i] == target)
        {
            arr2.push_back(i);
        }
    }
    if (arr2.size() == 0)
    {
        arr3.push_back(-1);
        arr3.push_back(-1);
    }
    else if (arr2.size() == 1)
    {
        arr3.push_back(arr2[0]);
        arr3.push_back(arr2[0]);
    }
    else
    {
        arr3.push_back(arr2[0]);
        arr3.push_back(arr2[arr2.size() - 1]);
    }
    return arr3;
}