#include<stdio.h>

int main()
{
    int n, m, a, pa = 0;
    long long count = 0;

    scanf("%d %d", &n, &m);

    while(m--){
        scanf("%d", &a);

        if(pa == 0) count = count + a;
        else if(pa > a) count = count + a + (n - pa);
        else if(pa < a) count = count + (a - pa);

        pa = a;
    }

    printf("%lld\n", count-1);

    return 0;
}
