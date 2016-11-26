#include<stdio.h>

int score[51];
int main()
{
	int n, k, x, i;

	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++){
		scanf("%d", &score[i]);
	}

	for(i = 0; i < n; i++){
		if((score[i] >= score[k-1]) && (score[i] > 0)){
			x = x+1;
		}
	}

	printf("%d",x);

	return 0;
}
