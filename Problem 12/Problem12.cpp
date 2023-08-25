//  The sequence of triangle numbers is generated by adding the natural numbers.So the 7th triangle number would be .
//  1 + 2 + 3 + 4 + 5 + 6 + 7 = 28, 28 is also the first triangle number to have over five divisors.
//  What is the value of the first triangle number to have over five hundred divisors ?
#include <iostream>

using namespace std; // Who doesn't use this?

int tri(int x) // Func for finding the Xth triangle number
{
	int sum = 0;
	for (int i = 1; i < x+1; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int fact_count(int x) // Func for finding the number of divisors for given int
{
	int count = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			count = count + 1;
		}
	}
	return count;
}

int main()
{
	int max = 0;      // To hold the highest number of divisors we've found so far
	int i = 0;	     //  Iteration variable, one wonders why I didn't use a for-loop instead to limit its scope

	while (max <= 500)
	{
		i = i + 1;
		facC = fact_count(tri(i));
		if (facC > max)
		{
			max = facC;
		}
		cout << i << "\n";
		cout << "sum: " << tri(i) << "\n";
	}

	system("cls");
	cout << tri(i);
	char nurtin;
	cin >> nurtin;
	return 0;
}