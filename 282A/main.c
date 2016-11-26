#include<stdio.h>

char s[4];

int main()
{
	int i, n, r = 0;

	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", s);
		if(s[0] == '+'){
			if(s[1] == '+'){
				if(s[2] == 'X') r++;
			}
		}
		if(s[0] == '-'){
			if(s[1] == '-'){
				if(s[2] == 'X') r--;
			}
		}
		if(s[0] == 'X'){
			if(s[1] == '+'){
				if(s[2] == '+') r++;
			}else if(s[1] == '-'){
				if(s[2] == '-') r--;
			}
		}
	}

	printf("%d\n", r);

	return 0;
}
