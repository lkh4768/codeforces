#include <iostream>
#include <cstring>

int main()
{
	char table[102][101] = {};
	int n, m, removeCnt = 0;
	std::cin >> n >> m;

	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j <= m; j++)
			std::cin >> table[j][i];
	}
	memset(table[0], '0', n);

	for(int j = 1; j <= m; j++)
	{
		bool next = false;
		for(int i = 0; i < n-1; i++)
		{
			if(table[j][i] > table[j][i+1] && table[j-1][i] == table[j-1][i+1])
			{
				strcpy(table[j], table[j-1]);
				next = true;
				removeCnt++;
				break;
			}
			else if(table[j][i+1] == table[j][i])
				next = true;
		}
		if(!next)
			break;
	}

	std::cout << removeCnt << '\n';

	return 0;
}
