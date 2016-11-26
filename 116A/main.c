#include<stdio.h>

int main()
{
	int s, a, b, i, p=0, maxP=0;

	scanf("%d", &s);
	for(i=0; i<s; i++){
		scanf("%d %d", &a, &b);
		
		p = p-a+b;
		if(p>maxP) maxP = p;
	}

	printf("%d\n", maxP);
	
	return 0;
}
