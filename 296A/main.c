#include<stdio.h>

int c[1001];

int main()
{
    int n, m, i, max = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &m);

        c[m]++;

        if(max < c[m]) max = c[m];
    }

    if((n+1)/2 >= max) printf("YES\n");
    else printf("NO\n");
    return 0;
}
