// problem link
//  https://leetcode.com/problems/median-of-two-sorted-arrays/description/

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
double findMedianSortedArrays(vector<int> &arr1, vector<int> &arr2);
int main()
{
    vector<int> arr1;
    vector<int> arr2;

    int size, num;
    cout << "Enter the size of arr ";
    cin >> size;
    cout << "Enter the arrray elements";
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        arr1.push_back(num);
    }
    cout << "Enter the size of arr ";
    cin >> size;
    cout << "Enter the array elements ";
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        arr2.push_back(num);
    }

    double result = findMedianSortedArrays(arr1, arr2);

    cout << result;
}
double findMedianSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> arr3;
    int size3 = arr1.size() + arr2.size();
    for (int i = 0; i < arr1.size(); i++)
    {
        arr3.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        arr3.push_back(arr2[i]);
    }
    for (int i = 0; i < arr3.size(); i++)
    {
        for (int j = i + 1; j < arr3.size(); j++)
        {
            if (arr3[i] > arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    int sum;
    int i = 0;
    int j = arr3.size() - 1;
    double mean = 2.3;
    double divider = 2.0;
    while (i <= j)
    {
        if (i == j)
        {
            mean = arr3[i];
        }
        else if (j - i == 1)
        {
            sum = (arr3[i] + arr3[j]);
            mean = sum / divider;
        }
        i++;
        j--;
    }

    return mean;
}