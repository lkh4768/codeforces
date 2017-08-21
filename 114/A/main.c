#include<stdio.h>

int main()
{
    int k, n, i, p = 1;

    scanf("%d %d", &k, &n);

    for(i=0; n > 1; i++){
        if(n%k == 0) n = n/k;
        else{
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n%d\n", i-1);

    return 0;
}
