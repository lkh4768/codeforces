#include <iostream>
#include <vector>

std::vector<int> p;

int main()
{
	int n, m;

	std::cin >> n;
	std::cin >> m;

	for(int i = 0; i < n; i++)
	{
		int tn;
		std::cin >> tn;
		p.push_back(tn);
	}

	std::vector<int>::iterator it = p.begin();
	for(int i = 0; i < m; i++)
	{
		int tn;
		std::cin >> tn;

		if(*it <= tn)
		{
			n--;
			++it;
		}
	}

	std::cout << ((n < 0)? 0:n) << std::endl;

	return 0;
}
