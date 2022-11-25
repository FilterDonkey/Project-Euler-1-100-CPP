// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?

using namespace std;

#include <iostream>
#include <boost/cstdint.hpp>

bool isPrime(int x)
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
    boost::int64_t num;
    cout << "This software has been designed to help the math enjoyers to find the largest prime factor of a given number, for example 600851475143.\nWhat number would you like to do so for?: ";
    cin >> num;
    cout << "\n";

    int i = 3;
    int largest = 0;

    while (i <= num)
    {

        int rem = num % i;
        if (rem == 0 && isPrime(i) == true)
        {
            num = num / i;
            largest = i;
        }
        else
        {
            i += 2;
        }
        
    }
    cout << "The largest prime factor of the given number is " << largest << "\n";
}


