// problem link
// https://leetcode.com/problems/fizz-buzz/description/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> fizzBuzz(int n)
{
    vector<string> st;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            st.push_back("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            st.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            st.push_back("Buzz");
        }
        else
        {
            st.push_back(to_string(i));
        }
    }
    return st;
}
int main()
{
    int num = 15;
    vector<string> res = fizzBuzz(num);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}