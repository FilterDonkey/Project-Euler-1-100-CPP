// A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3 - digit numbers.

using namespace std;

#include <iostream>
#include <boost/cstdint.hpp>
#include <string>

int main()
{
    boost::int64_t num = 0;
    boost::int64_t larg = 0;

    cout << "Here's the largest palindromic number made from the product of two 3-digit numbers: ";

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            num = i * j;
            string str = to_string(num);
            string rev = str;
            reverse(rev.begin(), rev.end());
            if (rev == str && num > larg)
            {
                larg = num;
            }

        }
    }
    cout << larg << "\n";
}


