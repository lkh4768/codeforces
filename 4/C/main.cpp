#include<stdio.h>
#include<string.h>

char ts[33];
char s[100001][33];
int ss[100001];
int main()
{
    int n, i, j, flag = 0, k = 0;
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%s", ts);
        
		for(j=0; j<k; j++){
			if(strcmp(ts, s[j]) == 0){
            	flag = 1;
            	ss[j]++;
            	break;
			}
        }
        
		if(flag == 0){
			strcpy(s[k], ts);
			k++;
			printf("OK\n");
		}
        else{
			printf("%s%d\n", ts, ss[j]);
			flag = 0;
		}
    }
    return 0;
}
