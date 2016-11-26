#include<stdio.h>

int main(){
	
	int n, m, cq, q = 0, count = 1, i;
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++){
		scanf("%d", &cq);
		if(q+cq > m){
			count++;
			q = cq;
		}else{
			q = q + cq;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
