#include<iostream>
#include<map>
#include<string>
#include<algorithm>

int main()
{
	int n, max = 0;
	std::string maxStr;
	std::cin >> n;
	std::map< std::string, int > map;
	for(int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		if(map.find(s) != map.end())
			map[s]++;
		else
			map[s] = 1;
	}

	for(std::map< std::string, int >::iterator it = map.begin(); it != map.end(); ++it)
	{
		max = std::max(it->second, max);
		if(max == it->second)
			maxStr = it->first; 
	}

	std::cout << max << std::endl;
	return 0;
}
