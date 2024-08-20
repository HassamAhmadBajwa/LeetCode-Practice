// problem link
// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/

#include <iostream>
#include <vector>
using namespace std;
int maxNumOfWords(vector<string> &sentence)
{

    int max = 0;
    for (int i = 0; i < sentence.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < sentence[i].size(); j++)
        {

            if (sentence[i][j] == ' ')
            {
                count++;
            }
        }
        if (count + 1 > max)
        {
            max = count + 1;
        }
    }
    return max;
}
int main()
{
    vector<string> str = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    int res = maxNumOfWords(str);
    cout << res;
}