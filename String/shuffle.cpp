// link
// https://leetcode.com/problems/shuffle-string/description/

#include <iostream>
#include <vector>
using namespace std;
string shuffleString(vector<int> &indices, string s)
{
    for (int i = 0; i < indices.size(); i++)
    {
        for (int j = i + 1; j < indices.size(); j++)
        {
            if (indices[i] > indices[j])
            {
                swap(indices[i], indices[j]);
                swap(s[i], s[j]);
            }
        }
    }
    return s;
}
int main()
{
    vector<int> arr = {0, 1, 2};
    string str = "abc";
    string res = shuffleString(arr, str);
    cout << res;
}