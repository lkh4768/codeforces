#include<stdio.h>
#include<string.h>

char s[100];

int main()
{
    int len, i, j, tmp;

    scanf("%s", s);

    len = strlen(s);

    for(i=0; i<len; i=i+2){
        tmp = s[i];
        for(j=i; j<len; j=j+2){
            if(s[j] < tmp){
                tmp = s[j];
                s[j] = s[i];
                s[i] = tmp;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
