#include<stdio.h>

int main()
{
	int n, m, r = 0, tmp;

	scanf("%d %d", &n, &m);
	
	while((n*m) > 1){
		r = r+((n/2)*m);	

		tmp = n%2;
		n = m;
		m = tmp;
	}

	printf("%d\n", r);

	return 0;
}
