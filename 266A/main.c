#include<stdio.h>

char s[51];

int main()
{
	int i, n, r = 0, flag = 0;
	
	scanf("%d", &n);
	scanf("%s", s);

	for(i=0; i<n; i++){
		if(flag == s[i]) r++;	
		flag = (int)s[i];
	}

	printf("%d\n", r);

	return 0;
}
