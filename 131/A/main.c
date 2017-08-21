#include<stdio.h>
#include<string.h>

char s[100];

int main()
{
	int i, fUp = 0, fDown = 0, fl = 1, up = 0, down = 0;

	scanf("%s", s);

	for(i=0; i<strlen(s); i++){
		if(i==0){
			if(s[i]>=97) fl = 0;
		}
		else if(s[i]>=97) down = down+1;
		else up = up+1; 
		
		if(fl==0){
			if(down==0) fUp = 1;
			else fUp = 0;
		}else if(up == strlen(s)-1){
			fDown = 1;
		}
	}
	
	for(i=0; i<strlen(s); i++){
		if(fUp==1){
			if(i==0) printf("%c", s[i]-32);
			else printf("%c", s[i]+32);
		}else if(fDown==1){
			printf("%c", s[i]+32);
		}else printf("%c", s[i]);
	}

	return 0;
}
