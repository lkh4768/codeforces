#include <iostream>
#include <cstring>

int main()
{
	char s[10001] = {0};
	char rs[10001] = {0};
	int si[10000];
	int m = 0, l = 0, r = 0, k = 0, size = 0;
	std::cin >> s >> m;

	size = (int)strlen(s);

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < size; j++)
			si[j] = j;

		std::cin >> l >> r >> k;
		for(int j = l-1; j <= r-1; j++) { si[j] = (l-1) + ((si[j]-l+1+k) % (r-l+1)); }

		for(int j = 0; j < size; j++) rs[si[j]] = s[j];
		strcpy(s, rs);
	}

	std::cout << s << std::endl;

	return 0;
}
