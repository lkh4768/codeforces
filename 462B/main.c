#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int c[28];

int cmpfunc (const void * a, const void * b)
{
       return ( *(int*)b - *(int*)a );
}

int main()
{
    int n, k, i;
    char a;
    long long int coin = 0;

    scanf("%d %d", &n, &k);

    for(i=0; i<n; i++){
        scanf("%c", &a);
        if(a == '\n') scanf("%c", &a);
        c[a-64]++;
    }

    qsort(c, 28, sizeof(int), cmpfunc);

    for(i=0; i<28; i++){
        if(k-c[i] <= 0){
            coin = coin + (long long int)k*k;
            break;
        }
        else coin = coin + (long long int)c[i]*c[i];
        k = k - c[i];
    }

    printf("%lli\n", coin);

    return 0;
}
