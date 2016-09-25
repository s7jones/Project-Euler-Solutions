#include <iostream>
#include <vector>
#include <cmath>
#include "../Utils/utils.h"

using namespace std;

/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

int main()
{
	uint64_t number = 600851475143;
	uint32_t root = floor(sqrt(number));
	vector<uint32_t> factors;
	for (uint32_t ptntl_fctr = 3; ptntl_fctr <= root; ptntl_fctr = ptntl_fctr + 2)
	{
		if (!isPrime(ptntl_fctr))
			continue;
		if (number % ptntl_fctr == 0)
			factors.push_back(ptntl_fctr);
	}
	cout << factors.back() << endl;
	return 0;
}