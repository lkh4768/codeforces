#include<stdio.h>

int main()
{
	char ch, flag = 0;

	while((ch = getchar()) != 10)
	{
		if(ch == 'H' || ch =='Q' || ch =='9'){
			printf("YES\n");
			flag = 1;
			break;
		}
	}
	
	if(flag == 0) printf("NO\n");

	return 0;
}
