#include <iostream>
#include <set>

int main()
{
	int n;
	std::cin >> n;

	std::set<int> balls;
	for(int i = 0; i < n; i++)
	{
		int t;
		std::cin >> t;
		balls.insert(t);
	}
	
	std::set<int>::iterator end = balls.end();
	std::advance(end, -2);
	for(std::set<int>::iterator it = balls.begin(); it != end; ++it)
	{
		std::set<int>::iterator b1 = it;
		std::set<int>::iterator b2 = it;
		std::set<int>::iterator b3 = it;
		std::advance(b2, 1);
		std::advance(b3, 2);
		if(*b3 - 1 == *b2 && *b2 - 1 == *b1)
		{
			std::cout << "YES\n";
			return 0;
		}
	}

	std::cout << "NO\n";
	return 0;
}
