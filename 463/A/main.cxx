#include <iostream>

int main()
{
	int n, s, max = -1;
	std::cin >> n >> s;
	s=s*100;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		std::cin >> x >> y;
		if(s >= (x * 100) + y)
			max = std::max(max, (s-((x * 100) + y))%100);
	}

	std::cout << max << std::endl;
	return 0;
}
