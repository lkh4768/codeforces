#include <iostream>

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
	int n, p;
	bool isLeft = false;
	std::string str;
	std::cin >> n >> p >> str;

	std::vector<int> dist(n/2, 0); 
	if(p < n/2) isLeft=true;

	for(int i = 0; i < n/2; i++)
	{
		if(str[i] != str[n-i])
		{
			int max = std::max(str[i], str[n-i]), min = std::min(str[i], str[n-i]);
			dist[i] = std::min(getAlphabetIdxDistance(max, min) > getAlphabetIdxRDistance(max, min))
		}
	}

	return -1;
}
