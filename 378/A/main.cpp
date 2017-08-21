#include<stdio.h>

int main()
{
	int a, b, aw = 0, d = 0, bw = 0, ta, tb, i;
	
	scanf("%d %d", &a, &b);
	
	for(i=1; i<=6; i++){
		ta = a - i;
		tb = b - i;
		if(ta < 0) ta = -ta;
		if(tb < 0) tb = -tb;

		if(ta > tb) bw++;
		else if(ta == tb) d++;
		else aw++;
	}
	
	printf("%d %d %d\n", aw, d, bw);
	
	return 0;
}
