// problem link
//  https://leetcode.com/problems/find-the-difference/submissions/1269834425/

#include <iostream>
#include <vector>
using namespace std;
char uniqueChar(string s, string t)
{
    vector<int> arr(26);
    for (int i = 0; i < t.size(); i++)
    {
        arr[t[i] - 'a']++;
    }
    for (int j = 0; j < s.size(); j++)
    {
        arr[s[j] - 'a']--;
    }
    for (int k = 0; k < arr.size(); k++)
    {
        if (arr[k] == 1)
        {
            return char(k + 'a');
        }
    }
    return 0;
}
int main()
{
    string s = "aabb";
    string t = "aabbc";
    char res = uniqueChar(s, t);
    cout << res;
}