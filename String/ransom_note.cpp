// problem statement
// https://leetcode.com/problems/ransom-note/description/

#include <iostream>
#include <vector>
using namespace std;
bool ransom_note(string a, string b)
{

    if (a.size() == 0 || b.size() == 0 || a.size() > b.size())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    a[i] = '1';
                    b[j] = '1';
                }
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != '1')
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    string a = "ab";
    string b = "aa";
    bool value = ransom_note(a, b);
    cout << value;
}