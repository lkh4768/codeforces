#include<iostream>
#include<iomanip>

int main()
{
	long double n = 0;
	std::cin >> n;

	if(n == 1)
		std::cout << "-1\n";
	else
		std::cout << std::fixed << std::setprecision(0) << n << " " << n+1 << " " << n*(n+1) << "\n";

	return 0;
}
