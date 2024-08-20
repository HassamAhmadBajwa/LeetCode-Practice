// problem link
// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/

#include <iostream>
#include <vector>
using namespace std;

int incDec(vector<string> &operation)
{

    int count = 0;
    for (int i = 0; i < operation.size(); i++)
    {
        if (operation[i][1] == '-')
        {
            count--;
        }
        else if (operation[i][1] == '+')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<string> str = {"++X", "X++", "X--", "--X"};
    int res = incDec(str);
    cout << res;
}