#include<stdio.h>
#include<string.h>

char s1[100], s2[100];

int main()
{
    scanf("%s", s1);
    scanf("%s", s2);

    printf("%d\n", strcasecmp(s1,s2));

    return 0;
}
