#include <iostream>
#include <vector>
using namespace std;

string integerToRoman(int num)
{
    string res = "";
    vector<string> symbol = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    vector<int> value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; num != 0; i++)
    {
        while (num >= value[i])
        {
            num = num - value[i];
            res = res + symbol[i];
        }
    }
    return res;
}

int main()
{
    int num = 1246;
    string result = integerToRoman(num);
    cout << result;
}