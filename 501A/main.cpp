#include<stdio.h>

int main()
{
	int mp, vp, mt, vt, ms, vs;
	
	scanf("%d %d %d %d", &mp, &vp, &mt, &vt);
	
	if(3*mp/10 > mp-(mp*mt/250)) ms = 3*mp/10;
	else ms = mp-(mp*mt/250);
	if(3*vp/10 > vp-(vp*vt/250)) vs = 3*vp/10;
	else vs = vp-(vp*vt/250);
	
	if(ms > vs) printf("Misha\n");
	else if(ms < vs) printf("Vasya\n");
	else printf("Tie\n");
	
	return 0;
}
