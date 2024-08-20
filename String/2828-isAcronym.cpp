// problem link
//  https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/description/

#include <iostream>
#include <vector>
using namespace std;

bool acronym(vector<string> &words, string s)
{
    string s2;
    for (int i = 0; i < words.size(); i++)
    {
        s2.push_back(words[i][0]);
    }
    if (s == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<string> str = {"never", "gonna", "give", "up", "on", "you"};
    string s = "ngguoy";
    bool res = acronym(str, s);
    cout << res;
}