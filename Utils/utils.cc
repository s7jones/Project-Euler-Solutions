#include "utils.h"

using namespace std;

bool isPrime(uint32_t number)
{
	uint32_t root_number = floor(sqrt(number));
	for (uint32_t j = 2; j <= root_number; j++)
	{
		if (number % j == 0)
		{
			return false;
		}
	}
	return true;
}

bool isPalindrome(int number)
{
	string str = to_string(number);
	for (int i = 0; i < floor(str.length()/2); i++)
	{
		if (str[i] != str.end()[-i-1])
			return false;
	}
	return true;
}