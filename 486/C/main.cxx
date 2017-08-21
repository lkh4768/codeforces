#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>

int getAlphabetIdx(char c)
{
	return c - 'a';
}

int getAlphabetIdxDistance(char src, char dst)
{
	return getAlphabetIdx(src) - getAlphabetIdx(dst);
}

int getAlphabetIdxRDistance(char src, char dst)
{
	return (26+getAlphabetIdx(dst)) - getAlphabetIdx(src);
}

int main()
{
	int n, p, move = 0, lep, rep;
	std::string str;
	std::cin >> n >> p >> str;

	int m = n/2;
	if(p > m) lep = rep = p = n - p;
	else lep = rep = --p;

	if(n%2 != 0) m++;

	for(int i = 0; i < m; i++)
	{
		if(str[i] != str[n-i-1])
		{
			int max = std::max(str[i], str[n-i-1]), min = std::min(str[i], str[n-i-1]);
			move += std::min(getAlphabetIdxDistance(max, min), getAlphabetIdxRDistance(max, min));

			if(i < p) lep = std::min(lep, i);
			else rep = std::max(rep, i);
		}
	}

	move += (p - lep > rep - p) ? (rep - p) + (rep - lep):(p - lep) + (rep - lep);
	
	std::cout << move << '\n';

	return 0;
}
