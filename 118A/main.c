#include<stdio.h>
#include<string.h>

char s[100];

int main()
{
	int i, len;

	scanf("%s", s);

	len = strlen(s);

	for(i = 0; i < len; i++){
		if(s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'){}
		else{
			if(s[i] >='A' && s[i] <='Z'){
				printf(".%c",s[i]+32);
			}else{
				printf(".%c",s[i]);
			}
		}
	}

	return 0;
}
