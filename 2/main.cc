#include <iostream>
#include <vector>
//#include <set>
#include <numeric>

using namespace std;

/*Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.*/

int main()
{
	uint64_t sum = 0;
	vector<uint32_t> seq = {1,2};
	uint32_t fibonacci = 2;
	do {
		if (seq.end()[-1] % 2 == 0)
			sum += seq.end()[-1];
		 fibonacci = seq.end()[-1] + seq.end()[-2];
		seq.push_back(fibonacci);
	} while (fibonacci < 4000000);
	cout << sum << endl;
	return 0;
}