#include<stdio.h>

char s[1001];

int main()
{
    scanf("%s", s);

    if(s[0] >= 97) s[0] = s[0]-32;

    printf("%s", s);

    return 0;
}
