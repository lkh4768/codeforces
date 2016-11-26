#include<stdio.h>

int a[100001], f[100001], b[100001];

int main()
{
    int n, m, l, i, s = 0;

    scanf("%d %d", &n, &m);

    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
        f[a[i]]++;
        if(f[a[i]] == 1) s++;
    }

    for(i=1; i<=n; i++){
        f[a[i]]--;
        b[i] = s;
        if(f[a[i]] == 0) s--;
    }

    for(i=1; i<=m; i++){
        scanf("%d", &l);
        printf("%d\n", b[l]);
    }

    return 0;
}
