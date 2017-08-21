#include<stdio.h>

char c[101][101];

int main(){
	int n, sum = 0, i, j;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			scanf("%c", &c[i][j]);
			if(c[i][j] == '\n') scanf("%c", &c[i][j]);
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(c[i+1][j] == 'o') sum++;
			if(c[i-1][j] == 'o') sum++;
			if(c[i][j+1] == 'o') sum++;
			if(c[i][j-1] == 'o') sum++;
			if(sum%2 == 1){
				printf("NO\n");
				return 0;
			}
		}
	}
	
	printf("YES\n");
	return 0;
}
