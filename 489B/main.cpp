#include<stdio.h>
#include<stdlib.h>

int b[101], g[101];

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int nb, ng, p = 0, i, j;
	
	scanf("%d", &nb);
	for(i=0; i<nb; i++) scanf("%d", &b[i]);
	
	scanf("%d", &ng);
	for(i=0; i<ng; i++) scanf("%d", &g[i]);
	
	qsort(b, nb, sizeof(int), cmpfunc);
	qsort(g, ng, sizeof(int), cmpfunc);
	
	for(i=0; i<ng; i++){
		for(j=0; j<nb; j++){
			if(b[j] != -1){
				if(g[i]-b[j] == -1 || g[i]-b[j] == 1 || g[i]-b[j] == 0){
					p++;
					b[j] = -1;
					break;
				}
			}
		}	
	}
	
	printf("%d\n", p);
	return 0;
}
