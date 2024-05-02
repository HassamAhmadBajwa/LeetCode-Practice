// problem statement
//  https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &arr, int target);
int main()
{
    vector<int> arr;
    int size, num, target;
    cout << "Enter the size of array";
    cin >> size;
    cout << "Enter the Array element";
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    cout << "Enter target value";
    cin >> target;
    vector<int> result = twoSum(arr, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
vector<int> twoSum(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j <= arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}