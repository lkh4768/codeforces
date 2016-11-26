#include <iostream>

int map[500][501];
int m, n, q, x, y, max;

int main()
{
	std::cin >> n >> m >> q;
	for(int i = 0; i < n; i++)
	{
		int sum = 0, max = 0;
		for(int j = 0; j < m; j++)
		{
			std::cin >> map[i][j];
			if(map[i][j] & 1)
				sum++;
			else
			{
				if(max < sum)
					max = sum;
				sum = 0;
			}
		}

		if(max < sum)
			map[i][m] = sum;
		else
			map[i][m] = max;
	}

	for(int i = 0; i < q; i++)
	{
		std::cin >> x >> y;
		--x;
		--y;
		map[x][y] = map[x][y]^1;

		int max = 0, sum = 0;
		for(int j = 0; j < m; j++)
		{
			if(map[x][j] & 1)
				sum++;
			else
			{
				if(max < sum)
					max = sum;
				sum = 0;
			}
		}
		if(max < sum)
			map[x][m] = sum;
		else
			map[x][m] = max;

		for(int j = 0; j < n; j++)
			if(max < map[j][m]) max = map[j][m];

		std::cout << max << "\n";
	}
	return 0;
}
