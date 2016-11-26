#include<stdio.h>

int m[101];

int main()
{
    int n, i, d;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%d", &d);
        m[d] = i;
    }

    for(i=1; i<=n; i++) printf("%d ", m[i]);
    printf("\n");

    return 0;
}
