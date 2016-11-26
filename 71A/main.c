#include<stdio.h>
#include<string.h>

char data[101][101];

int main()
{
	int n, i, length;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s", &data[i]);
	}
	
	for(i = 0; i < n; i++){
		length = strlen(data[i]);
		if(length > 10){
			printf("%c%d%c\n", data[i][0], length-2, data[i][length-1]);
		}else{
			printf("%s\n", data[i]);
		}
	}
	
	return 0;
}
