// Which starting number, under one million, produces the longest chain in a Collatz sequence?

#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;


int collatzLen(int X)
{
    boost::multiprecision::cpp_int x = X;    // Quickly ran into overflow errors using std int

    int count = 1;                          //  Keeping count of sequence length
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
        }
        else
        {
            x = 3 * x + 1;
        }
        count = count + 1;
    }
    
    return count;
}

int main()
{
    int longest = 1;    // Holding the integer length of the longest sequence found thus far
    int iLongest = 1;   // Holding the integer producing the longest sequence found thus far

    for (int i = 1; i <= pow(10,6); i++)
    {
        int len = collatzLen(i);
        if (len > longest)
        {
            longest = len;
            iLongest = i;
        }
    }
    cout << "Number under 1 million which produces the longest Collatz sequence: " << iLongest << "\n";
    cout << "Length of Collatz sequence: " << collatzLen(iLongest);
    
    cin >> longest;

    return 0;
}

