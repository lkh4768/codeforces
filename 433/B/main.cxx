#include <iostream>
#include <vector>
#include <map>

int n, m, type, l, r;
unsigned long long sum;
std::vector <unsigned long long> nonOrderSum, orderSum;
std::map <unsigned long long, int> orderArg;

int main()
{
	std::cin >> n;
	nonOrderSum.push_back(sum);
	for(int i = 1; i < n + 1; i++)
	{
		unsigned long long x;
		std::cin >> x;
		sum += x;
		nonOrderSum.push_back(sum);
		if(orderArg.find(x) != orderArg.end())
			orderArg[x]++;
		else
			orderArg[x] = 1;
	}

	sum = 0;
	orderSum.push_back(sum);
	for(std::map<unsigned long long, int>::iterator it = orderArg.begin(); it != orderArg.end(); ++it)
	{
		int val = it->first;
		int cnt = it->second;
		for(int i = 0; i < cnt; i++)
		{
			sum += val;
			orderSum.push_back(sum);
		}
	}

	std::cin >> m;

	for(int i = 0; i < m; i++)
	{
		std::cin >> type >> l >> r;
		if(type == 1)
			std::cout << nonOrderSum[r] - nonOrderSum[--l] << "\n";
		else
			std::cout << orderSum[r] - orderSum[--l] << "\n";
	}

	return 0;
}
