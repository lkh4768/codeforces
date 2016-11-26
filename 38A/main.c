#include<stdio.h>
#include<stdlib.h>

int comparisonFunctionInt(const void *a, const void *b) {

    if (*(int*)a <  *(int*)b) return -1;
    if (*(int*)a == *(int*)b) return  0;

    return 1;
}

int d[101];

int main()
{
    int n, a, b, y = 0, i;

    scanf("%d", &n);

    for(i=0; i<n-1; i++) scanf("%d", &d[i]);

    scanf("%d %d", &a, &b);
    
    for(i=a-1; i<b-1; i++) y = y + d[i];

    printf("%d\n", y);

    return 0;
}
