#include <iostream>
#include <map>

std::map<char, int> s, t;

int main()
{
	char c;
	int sum = 0;
	while(std::cin.get(c))
	{
		if(c == '\n')
			break;
		s[c]++;
		sum++;
	}

	while(std::cin.get(c))
	{
		if(c == '\n')
			break;
		t[c]++;
	}

	int cnt = 0;
	for(std::map<char, int>::iterator it = t.begin(); it != t.end(); ++it)
	{
		c = it->first;
		cnt = it->second;

		if(s.find(c) != s.end())
		{
			s[c] -= cnt;
			s[c] = (s[c] < 0)? 0:s[c];
		}
	}

	int whoops = 0;
	for(std::map<char, int>::iterator it = s.begin(); it != s.end(); ++it)
		whoops += it->second;

	std::cout << sum - whoops << " " << whoops << "\n";

	return 0;
}
