#include<stdio.h>

int main()
{
    int i, x, max = 0, n, sum = 0, m;

    scanf("%d %d", &n, &x);

    for(i=0; i<n; i++){
        scanf("%d", &m);
        sum = sum + m;
    }

    if(sum < 0) sum = -sum;

    if(sum%x != 0) max = max + 1;
    max = max + (sum/x);

    printf("%d\n", max);

    return 0;
}
