// problem link
// https://leetcode.com/problems/longest-common-prefix/submissions/1260877897/

#include <iostream>
#include <vector>
using namespace std;

string longestPrefix(vector<string> &str)
{
    string s = "";
    for (int i = 0; i < str[0].size(); i++)
    {
        for (int j = 1; j < str.size(); j++)
        {
            if (i > str[0].size() || str[j][i] != str[0][i])
            {
                return s;
            }
        }
        s = s + str[0][i];
    }
    return s;
}
int main()
{
    vector<string> str = {"flower", "fluid", "flow"};

    string result = longestPrefix(str);
    cout << result;
}