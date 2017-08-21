#include<stdio.h>

int main()
{
    int n, m, min;

    scanf("%d %d", &n, &m);

    if(n > m) min = m;
    else min = n;

    if(min%2 != 0) printf("Akshat\n");
    else printf("Malvika\n");

    return 0;
}
