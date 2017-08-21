#include<stdio.h>

int main()
{
	long long m, n, kmin1, kmin2, kmax = 0, r, t;
	
	scanf("%lli %lli", &n, &m);
	
	r = n%m;
	t = n/m;

	kmin1 = (t+1)*(t/2);
	if(t%2 == 1) kmin1 = kmin1 + (t+1)/2;
	kmin1 = kmin1*r;
	
	kmin2 = (t*((t-1)/2));
	if((t-1)%2 == 1) kmin2 = kmin2 + t/2;
	kmin2 = kmin2 * (m-r);
	
	kmax = (n-m+1)*((n-m)/2);
	if((n-m)%2 == 1) kmax = kmax + (n-m+1)/2;
	
	printf("%lli %lli", kmin1 + kmin2, kmax);
	return 0;
}
