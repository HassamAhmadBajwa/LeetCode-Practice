// problem link
//  https://leetcode.com/problems/search-insert-position/description/

#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int> &arr, int target);
int main()
{
    vector<int> arr;
    int value, size, target;
    cout << "Enter the size of array";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    cout << "Enter the target value ";
    cin >> target;
    int result = searchInsert(arr, target);
    cout << result;
}
int searchInsert(vector<int> &arr, int target)
{
    int begin = 0;
    int end = arr.size() - 1;
    int middle;
    if (target < arr[begin])
    {
        return 0;
    }
    else if (target > arr[end])
    {
        return end + 1;
    }
    while (begin <= end)
    {
        middle = (begin + end) / 2;
        if (arr[middle] == target)
        {
            return middle;
        }
        if (target > arr[middle])
        {
            begin = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return begin;
}
