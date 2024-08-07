// problem link
//  https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1269446348/

#include <iostream>
using namespace std;

void swap(char &a, char &b)
{
    char c;
    c = a;
    a = b;
    b = c;
}
bool vowel(char c)
{
    if (c == 'a' || c == 'A')
    {
        return true;
    }
    else if (c == 'e' || c == 'E')
    {
        return true;
    }
    else if (c == 'i' || c == 'I')
    {
        return true;
    }
    else if (c == 'o' || c == 'O')
    {
        return true;
    }
    else if (c == 'u' || c == 'U')
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
    string s = "ab";
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (!vowel(s[i]))
        {
            i++;
        }
        else if (!vowel(s[j]))
        {
            j--;
        }
        else
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    cout << s << endl;
}
