// problem link
// https://leetcode.com/problems/find-words-containing-character/description/

#include <iostream>
#include <vector>
using namespace std;
vector<int> findWordsContaining(vector<string> &words, char ch)
{
    vector<int> arr;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = 0; j < words[i].size(); j++)
        {
            if (words[i][j] == ch)
            {
                arr.push_back(i);
                break;
            }
        }
    }
    return arr;
}

int main()
{
    vector<string> str = {"abc", "bcd", "aaaa", "cbc"};
    char ch = 'a';
    vector<int> res = findWordsContaining(str, ch);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
    }
}