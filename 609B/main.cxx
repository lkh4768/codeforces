#include <iostream>

long long genre[11];
int main()
{
	int n, m;
	std::cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		int k;
		std::cin >> k;
		genre[k]++;
	}

	long long sum = (long long)n*(n-1)/2;

	for(int i = 1; i <= 10; i++)
		sum -= (genre[i]*(genre[i]-1)/2);

	std::cout << sum << std::endl;

	return 0;
}
