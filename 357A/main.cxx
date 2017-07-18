#include <iostream>

int c[100];

int main()
{
	int m, x, y, beginnerGrp = 0, intermediateGrp = 0;
	std::cin >> m;
	for(int i = 0; i < m; i++)
	{
		std::cin >> c[i];
		intermediateGrp += c[i];
	}
	std::cin >> x >> y;

	for(int i = 0; i < m; i++)
	{
		if(beginnerGrp >= x && beginnerGrp <= y && intermediateGrp >= x && intermediateGrp <=y)
		{
			std::cout << i+1 << '\n';
			return 0;
		}

		beginnerGrp+= c[i];
		intermediateGrp -= c[i];
	}

	std::cout << "0\n";
	return 0;
}
