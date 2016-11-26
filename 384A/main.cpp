#include<stdio.h>

int main()
{
	int n, i, j, sum = 0; 

	scanf("%d", &n);

	for(i=1; i<=n; i++){
		if(n%2 == 1){
			if(i%2 == 1) sum = sum + (n/2) + 1;
			else sum = sum + (n/2);
		}
		else sum = sum + (n/2);
	}

	printf("%d\n", sum);

	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j%2 == i%2) printf("C");
			else printf(".");
		}
		printf("\n");
	}

	return 0;
}
