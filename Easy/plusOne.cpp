// problem statement
// https://leetcode.com/problems/plus-one/description/

#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> &digit)
{
    int last = digit.size();
    for (int i = last - 1; i >= 0; i--)
    {
        if (digit[i] < 9)
        {
            digit[i] += 1;
            return digit;
        }
        else
        {
            digit[i] = 0;
        }
    }
    digit.insert(digit.begin(), 1);
    return digit;
}
int main()
{
    vector<int> arr = {9, 9, 9, 9, 9};
    vector<int> arr2;
    arr2 = plusOne(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
}