#include <iostream>
#include <cstring>

int main()
{
	char s[10001] = {0};
	char rs[10001] = {0};
	int m = 0, l = 0, r = 0, k = 0;
	std::cin >> s >> m;

	for(int i = 0; i < m; i++)
	{
		std::cin >> l >> r >> k;
		for(int j = l-1; j <= r-1; j++) rs[(l-1) + ((j-l+1+k) % (r-l+1))] = s[j]; 
		for(int j = l-1; j <= r-1; j++) s[j] = rs[j];
	}

	std::cout << s << std::endl;

	return 0;
}
