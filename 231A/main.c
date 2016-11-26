#include<stdio.h>

int a[1001][4];

int main()
{
	int i, j, n, r = 0, tmp = 0;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
			if(a[i][j] == 1) tmp++;
		}
		if(tmp >= 2) r++;
		tmp = 0;
	}

	printf("%d\n", r);

	return 0;
}
