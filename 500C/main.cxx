#include <iostream>

int main()
{
	int n, m, minW = 0, ws[501] = {0}, stemp[501] = {0}, bs[1001] ={0};

	std::cin >> n >> m;

	for(int i = 1; i <= n; i++)
		std::cin >> ws[i];

	for(int i = 1; i <= m; i++)
	{
		int b;
		std::cin >> b;
		bs[i] = b;
		if(stemp[b] != 0) bs[stemp[b]] = 0;
		for(int j = stemp[b]; j < i; j++) minW += ws[bs[j]];
		stemp[b] = i;
	}

	std::cout << minW <<'\n';

	return 0;
}
