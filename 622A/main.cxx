#include <iostream>

int main()
{
	long long n = 0, m = 0, ret = 0;

	std::cin >> n;

	while(( ret = m*(m + 1)/2 ) < n)
		m++;

	std::cout << m - (ret - n) << std::endl;

	return 0;
}
