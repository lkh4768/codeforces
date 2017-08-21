#include<stdio.h>
#include<string.h>

char s[101];

int main()
{
    int n = 0, i;
    char r[5]={"hello"};

    scanf("%s", s);

    for(i=0; i<strlen(s); i++){
        if(s[i] == r[n]) n++;
    }

    if(n == 5) printf("YES\n");
    else printf("NO\n");

    return 0;
}
