#include <iostream>
#include <vector>
#include <algorithm>
#include "../Utils/utils.h"

using namespace std;

/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int main()
{
	vector<vector<int>> results;
	vector<int> palindromes;
	for (int i = 100; i <= 999; ++i)
	{
		vector<int> emptyvec;
		results.push_back(emptyvec);
		for (int j = 100; j <= i; ++j)
		{
			results.back().push_back(i * j);
			if (isPalindrome(i * j)) {
				palindromes.push_back(i * j);
			}
		}
	}
	sort(palindromes.begin(), palindromes.end());
	cout << palindromes.back() << endl;
	return 0;
}

