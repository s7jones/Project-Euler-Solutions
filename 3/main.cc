#include <iostream>
#include <vector>
#include <cmath>

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
		uint32_t root_ptntl_fctr = floor(sqrt(ptntl_fctr));
		bool prime = true;
		for (uint32_t j = 2; j < root_ptntl_fctr; j++)
		{
			if (ptntl_fctr % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (!prime)
			continue;
		if (number % ptntl_fctr == 0)
			factors.push_back(ptntl_fctr);
	}
	cout << factors.back() << endl;
	return 0;
}