// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

using namespace std;

#include <iostream>

int main()
{
    int sum = 0;
    int x;

    cout << "This piece of high-tech software is designed to help you find the sum of all the numbers which are multiples of 3 and/or 5 below a certain number.\n";
    cout << "If it's not too much trouble please provide me with such a number: ";
    cin >> x;
    system("cls");

    for (int i = 1; i < x; i++)
    {
        int five = i % 5;
        int three = i % 3;
        if (five == 0 || three == 0)
        {
            sum += i;
        }
    }

    cout << "Here it is, the sum of all numbers divisble by 3 and 5 below " << x << ": " << sum << "\n";

}


