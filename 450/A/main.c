#include<stdio.h>

int main()
{
    int n, m, last, max = 0, a, i, tmp;

    scanf("%d %d", &n, &m);

    for(i=1; i<=n; i++){
        scanf("%d", &a);

        if(a%m != 0) tmp = a/m + 1;
        else tmp = a/m;

        if(tmp >= max){
            max = tmp;
            last = i;
        }
    }

    printf("%d\n", last);

    return 0;
}
