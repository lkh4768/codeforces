#include<stdio.h>
#include<string.h>

char s[51], in[51];

int main()
{
    int i, inLen = 0, j = 0;

    scanf("%s\n%s", s, in);

    inLen = strlen(in);

    for(i=0; i<inLen; i++) if(s[j] == in[i]) j++;

    printf("%d\n", j+1);

    return 0;
}
