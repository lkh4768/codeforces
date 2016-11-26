#include <iostream>
#include <map>

char map[50][50];
int n, m;

int main()
{
	std::cin >> n >> m;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			std::cin >> map[i][j];
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(map[i][j] != '0' && ((map[i-1][j] == map[i][j]) + (map[i+1][j] == map[i][j]) + (map[i][j-1] == map[i][j]) + (map[i][j+1] == map[i][j]) < 2))
			{
				map[i][j] = '0';
				i = 0;
				j = 0;
			}
		}
	}

	int r = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(map[i][j] != '0')
				r++;
		}
	}

	if(r > 1)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
	return 0;
}
