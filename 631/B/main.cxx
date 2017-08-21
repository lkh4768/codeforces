#include <iostream>
#include <algorithm>

int n, m, k, seqc[5000], seqr[5000], color[100001];

int main()
{
	std::cin >> n >> m >> k;

	for(int i = 1; i <= k; i++)
	{
		int type, rc;
		std::cin >> type >> rc >> color[i];
		if(type == 1) seqr[rc-1] = i;
		else seqc[rc-1] = i;
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++) std::cout << color[std::max(seqr[i], seqc[j])] << " ";
		std::cout << "\n";
	}

	return 0;
}
