#include<cstdio>

int main()
{
	int n;
	long long abss, max = -1000000000, min = 1000000000, a, pa, one = 1, sum = 0;
	scanf("%d", &n);
	scanf("%lli", &pa);
	for(int i = 0; i < n-1; i++)
	{
		scanf("%lli", &a);

		abss = (pa - a > 0)? (pa - a):(pa - a)*-1;
		sum += abss * one;

		min = (sum > min) ? min:sum;
		max = (sum > max) ? sum:max;
		one = one * -1;
		pa = a;
	}

	if(min < 0)
	{
		min = min * -1;
		printf("%lli\n", max + min);
	}
	else
		printf("%lli\n", max);

	return 0;
}
