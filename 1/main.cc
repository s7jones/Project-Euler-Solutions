#include <iostream>
#include <set>
#include <numeric>

using namespace std;

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/

int main()
{
	set<int> multiples;
	for (int i = 1; i < 1000; ++i)
	{
		if (((i % 5) == 0) || (((i % 3) == 0)))
			multiples.insert(i);
	}
	int sum = accumulate(multiples.begin(), multiples.end(), 0);
	cout << sum << endl;
	return 0;
}