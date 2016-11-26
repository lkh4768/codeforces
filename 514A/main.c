#include<stdio.h>
#include<string.h>

char s[19];

int main()
{
    int i;

    scanf("%s", s);

    for(i=0; i<strlen(s); i++){
        if(s[i] < 53 || (s[i] == 57 && i == 0)) printf("%c", s[i]);
        else printf("%c", 9-s[i]+96);
    }
    return 0;
}

