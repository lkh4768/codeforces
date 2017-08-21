#include<cstdio>
#include<algorithm>

int main()
{
	int x, y, a, b, max = -1, lcm, ret;
	scanf("%d %d %d %d", &x, &y, &a, &b);

	max = std::max(x, y);
	for(int i = max; i <= x*y; i++)
	{
		if(i % x == 0 && i % y == 0)
		{ 
			lcm = i;
			break;
		}
	}

	ret = (b/lcm) - (a/lcm);
	if(a%lcm == 0) ret++;

	printf("%d\n", ret);
	return 0;
}
