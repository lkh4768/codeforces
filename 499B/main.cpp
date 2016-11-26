#include<stdio.h>
#include<string.h>

char a[6002][11];
char c[11];

int main()
{
	int n, m, i, j, ri;
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<m*2; i = i+2){
		scanf("%s %s", a[i], a[i+1]);
	}
	
	for(i=0; i<n; i++){
		scanf("%s", c);
		
		for(j=0; j<m*2; j++){
			if(strcmp(a[j], c) == 0){
				if(j%2 == 1){
					if(strlen(a[j-1]) > strlen(a[j])) printf("%s ", a[j]);
					else printf("%s ", a[j-1]);
				}
				else{
					if(strlen(a[j]) > strlen(a[j+1])) printf("%s ", a[j+1]);
					else printf("%s ", a[j]);
				}
				break;
			}
		}
	}
	
	return 0;
}
