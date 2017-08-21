#include<stdio.h>

int main()
{
	int n, k, l, c, d, p, nl, np, min;
	
	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
	
	min = k*l/nl;
	if(min > c*d) min = c*d;
	if(min > p/np) min = p/np;
	
	printf("%d\n", min/n);
	
	return 0;
}
