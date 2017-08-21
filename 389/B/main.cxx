#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	char map[100][100] = {0};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			std::cin >> map[i][j];
		
	}

	for(int i = 1; i < n-1; i++)
	{
		for(int j = 1; j < n-1; j++)
		{
			if(map[i][j] == '#' && map[i-1][j] == '#' && map[i+1][j] == '#' && map[i][j-1] == '#' && map[i][j+1] == '#')
			{
				map[i][j] = '.';
				map[i-1][j] = '.';
				map[i+1][j] = '.';
				map[i][j-1] = '.';
				map[i][j+1] = '.';
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(map[i][j] == '#')
			{
				std::cout << "NO\n";
				return 0;
			}
		}
	}

	std::cout << "YES\n";

	return 0;
}
