#include<stdio.h>

int main()
{
	char ch, z = 0, o = 0;
	
	while((ch = getchar()) != 10)
	{
		if(ch == 48){
			z++;
			if(o>=1)o=0;
			if(z>6)	break;
		}else if(ch == 49){
			o++;
			if(z>=1)z=0;
			if(o>6) break;
		}
	}
	
	if(z>6 || o>6) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
