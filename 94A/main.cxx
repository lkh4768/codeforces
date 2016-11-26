#include <iostream>
#include <cstring>

char args[10][11], s[81];

int main()
{
	std::cin >> s;
	for(int i = 0; i < 10; i++)
		std::cin >> args[i];

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(strncmp(s+(10*i), args[j], 10) == 0)
			{
				std::cout << j;
				break;
			}
		}
	}

	std::cout << '\n';
	return 0;
}
