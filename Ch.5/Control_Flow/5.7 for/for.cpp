#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
		result *= base;

	return result;
}

int main()
{
	//cout << pow(2, 4) << endl;
	for (unsigned int i = 9; i >=  0; i--)
	{
		cout << i << endl;
	}

	return 0;
}