// problem link
// https://leetcode.com/problems/reverse-string/

#include <iostream>
using namespace std;
void reverseString(string &s)
{
    char c;
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;

        i++;
        j--;
    }
    cout << s << endl;
}
int main()
{
    string s = "hello";
    reverseString(s);
}