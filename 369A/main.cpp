#include<stdio.h>

int main()
{
	int n, b, p, m, i;
	
	scanf("%d %d %d", &n, &b, &p);
	
	for(i=0; i<n; i++){
		scanf("%d", &m);
		if(m == 1) b--;
		else{
			if(p > 0) p--;
			else b--;
		}
	}
	
	if(b < 0) printf("%d\n", b*(-1));
	else printf("0\n");
	
	return 0;
}
