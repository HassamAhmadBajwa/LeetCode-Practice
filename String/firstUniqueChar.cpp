// problem link
// https://leetcode.com/problems/first-unique-character-in-a-string/

#include <iostream>
#include <vector>

using namespace std;
int unique(string s)
{
    vector<int> arr(26);
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                arr[s[i] - 'a'] += 2;
                break;
            }
        }
        if (arr[s[i] - 'a'] == 0)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string s = "aabb";
    int res = unique(s);
    cout << res;
}