#include <cstdio>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> table;
	int n, m, cnt = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		char s[101] = {0};
		scanf("%s", s);
		table.push_back(s);
	}

	for(int i = 0; i < m; i++)
	{
		bool beRemove = false;
		for(int j = 0; j < n-1; j++)
		{
			if(table[j][i] > table[j+1][i] && table[j].compare(table[j+1]) > 0)
				beRemove = true;
		}

		if(beRemove)
		{
			for(int j = 0; j < n; j++)
				table[j][i] = 'a';
			cnt++;
		}
	}

	printf("%d\n", cnt);
	return 0;
}
