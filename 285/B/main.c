#include<stdio.h>

int p[100001];

int main()
{
    int i, count = 0, n, s, t;

    scanf("%d %d %d", &n, &s, &t);

    for(i = 1; i <= n; i++) scanf("%d", &p[i]);

    while(s != t){
        if(count > n){
            printf("-1\n");
            return 0;
        }
        s = p[s];
        count++;
    }

    printf("%d\n", count);

    return 0;
}
