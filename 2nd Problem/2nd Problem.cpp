//Each new term in the Fibonacci sequence is generated by adding the previous two terms.By starting with 1 and 2, the first 10 terms will be :
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even - valued terms.

using namespace std;

#include <iostream>
#include <boost/cstdint.hpp>

int main()
{
    boost::intmax_t sum = 0;
    boost::int64_t a, b, c, x;
    a = 0;
    b = 1;
    cout << "Gimme a num you fat fuck: ";
    cin >> x;
    system("cls");

    while (b < x)
    {
        c = a + b;
        a = b;
        b = c;
        if (c % 2 == 0)
        {
            sum += c;
        }
    }

    cout << "Check this out dumbass: " << sum << ".\n";
}


