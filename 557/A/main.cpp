#include<stdio.h>

int m[3][2];

int main()
{
	int n, a, b, c, i;
	
	scanf("%d", &n);
	
	for(i=0; i<3; i++) scanf("%d %d", &m[i][0], &m[i][1]);
	
	a = m[0][0];
	b = m[1][0];
	c = m[2][0];
	
	while(a+b+c != n){
		if(a < m[0][1]){
			a++;
		}else if(b < m[1][1]){
			b++;
		}else{
			c++;
		}
	}
	
	printf("%d %d %d", a, b, c);
	return 0;
}
