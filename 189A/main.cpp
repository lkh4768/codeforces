#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
	int n, r[3], m0 = 0, m1 = 0, m2 = 0, k0 = 0, k1 = 0, i, j, m = 0;
	
	scanf("%d %d %d %d", &n, &r[0], &r[1], &r[2]);
	
	qsort(r, 3, sizeof(int) , cmpfunc);
	
	m0 = n/r[0];
	k0 = n%r[0];
	
	if(k0 != 0){
		for(i=1; i<=m0; i++){
			if((k0+(i*r[0]))%r[1] == 0){
				if(m < m0-i + (k0+(i*r[0]))/r[1]) m = m0-i + (k0+(i*r[0]))/r[1];
			}else{
				m1 = (k0+(i*r[0]))/r[1];
				k1 = (k0+(i*r[0]))%r[1];
				for(j=1; j<=m1; j++){
					if((k1+(j*r[1]))%r[2] == 0){
						m2 = (k1+(j*r[1]))/r[2];		
						if(m < m0-i + m1-j + m2) m = m0-i + m1-j + m2;
					}
				}
			}
		}
	}else m = m0;
	
	printf("%d\n", m);
	return 0;
}
