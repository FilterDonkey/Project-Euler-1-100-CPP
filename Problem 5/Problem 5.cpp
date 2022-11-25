// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?

using namespace std;

#include <iostream>
#include <boost/cstdint.hpp>

int main()
{
    bool found = false;
    boost::int64_t num = 0;
    cout << "Here is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20: ";

    while (found == false)
    {
        num += 20;
        for (int i = 1; i <= 20; i++)
        {
            int rem = num % i;
            if (rem != 0)
            {
                break;
            }
            if (i == 20)
            {
                found = true;
            }
        }
    }

    cout << num << "\n";
}


