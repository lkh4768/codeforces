#include<stdio.h>
#include<string.h>

char s[101];

int main()
{
    int len, i, j, n = 0;

    scanf("%s", s);
    
    len = strlen(s);

    for(i=0; i<len; i++){
        if(s[i] != '1'){
            for(j=i+1; j<len; j++){
                if(s[i]==s[j]) s[j]='1';
            }
        }
    }

    for(i=0; i<len; i++){
        if(s[i] != '1') n++;
    }

    if(n%2 == 1) printf("IGNORE HIM!\n");
    else printf("CHAT WITH HER!\n");

    return 0;
}
