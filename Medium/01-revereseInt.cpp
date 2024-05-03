// problem link
// https://leetcode.com/problems/reverse-integer/submissions/1247785251/

#include <iostream>
using namespace std;
// function declaration...
int reverse(int num);
// main function...
int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    // call the function...
    int result = reverse(num);
    cout << result << endl;
}
// function initialization...
int reverse(int num)
{
    long reverse = 0;
    long remainder;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if (reverse > 2147483647 || reverse < -2147483648)
    {
        return 0;
    }
    else
    {
        return reverse;
    }
}