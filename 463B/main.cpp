#include<stdio.h>

int main(){
	int n, max = 0, h, i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &h);
		if(max < h) max = h;
	}
	
	printf("%d\n", max);
	
	return 0;
}
