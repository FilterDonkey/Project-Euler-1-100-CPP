//By listing the first six prime numbers : 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number ?

using namespace std;

#include <iostream>
#include <boost/cstdint.hpp>

bool isPrime(boost::int64_t x)
{
    int max = ceil(x / 2);

    if (x % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i < max; i += 2)
    {
        int rem = x % i;
        if (rem == 0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    boost::int64_t ptx = 1;
    boost::int64_t* x = &ptx;
    int ptfound = 1;
    int* found = &ptfound;

    while (*found < 10001)
    {
        *x += 2;
        if (isPrime(*x) == true)
        {
            *found += 1;
        }        
    }
    cout << "Here is the 10 001st prime number: " << *x << "\n";
}

