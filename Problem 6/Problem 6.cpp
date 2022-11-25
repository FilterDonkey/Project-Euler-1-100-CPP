// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

using namespace std;

#include <iostream>
#include <boost/cstdint.hpp>

int main()
{
    boost::int64_t sq_sum = 0;
    boost::int64_t sum_sq = 0;
    boost::int64_t diff = 0;
    int x;
    cout << "Provide me with a number, I will use this number to compute the difference between the sum of the squares of the first X natural numbers and the square of the sum of the first X natural numbers: ";
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        sq_sum += i;
    }
    sq_sum = pow(sq_sum, 2);

    for (int i = 1; i <= x; i++)
    {
        sum_sq += pow(i, 2);
    }
    diff = abs(sum_sq - sq_sum);

    cout << "The answer to the question posed above is " << diff << "\n";
}

