// problem link
//  https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
using namespace std;
bool palindrome(int num);
int main()
{
    signed int n;
    cin >> n;
    int result = palindrome(n);
    cout << result;
}
bool palindrome(int num)
{
    unsigned temp, reverse = 0, remainder;
    temp = num;
    if (num > 0)
    {
        while (num != 0)
        {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num = num / 10;
        }
    }
    if (temp == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}