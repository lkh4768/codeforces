#include <iostream>
#include <deque>
#include <vector>

int main()
{
	int n, m, mark[1001] = {0};
	unsigned long long minW = 0, ws[501] = {0};
	std::deque<int> initQ, liftQ;
	std::vector<int> bs;

	std::cin >> n >> m;

	for(int i = 1; i <= n; i++)
		std::cin >> ws[i];

	for(int i = 0; i < m; i++)
	{
		int b;
		std::cin >> b;
		bs.push_back(b);
		if(mark[b] == 0)
		{
			initQ.push_back(b);
			mark[b] = 1;
		}
	}

	int bsSize = bs.size();
	for(int i = 0; i < bsSize; i++)
	{
		while(!initQ.empty())
		{
			if(bs[i] != initQ.front())
			{
				minW += (long long)ws[initQ.front()];
				liftQ.push_back(initQ.front());
				initQ.pop_front();
			}
			else
			{
				std::deque<int>::iterator initQBegin = initQ.begin();
				initQ.insert(++initQBegin, liftQ.begin(), liftQ.end());
				liftQ.clear();
				break;
			}
		}
	}

	std::cout << minW <<'\n';

	return 0;
}
