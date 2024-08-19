// problem link
// https://leetcode.com/problems/truncate-sentence/description/

#include <iostream>
#include <vector>
using namespace std;
string truncateStentence(string s, int k)
{
    string s2;
    int count = 0;
    int i = 0;
    int end;
    while (count < k)
    {
        if (i == s.size())
        {
            return s;
        }
        if (s[i] == ' ')
        {
            count++;
            end = i;
        }

        i++;
    }
    for (int i = 0; i < end; i++)
    {
        s2.push_back(s[i]);
    }
    return s2;
}
int main()
{
    string s = "chopper is not a tanuki";
    int k = 5;
    string res = truncateStentence(s, k);
    cout << res;
}