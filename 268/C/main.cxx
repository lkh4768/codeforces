#include<iostream>

int main()
{
	int n, m, min;

	std::cin >> n >> m;

	min = (n>m)? m:n;

	std::cout << min+1 << '\n';
	for(int i = 0; i <= min; i++)
		std::cout << i << ' ' << min - i << '\n';

	return 0;
}
