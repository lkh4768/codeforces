#include<stdio.h>

int main()
{
    int tmp, a = 0, b = 0, n, i;

    for(i=0; i<3; i++){
        scanf("%d", &tmp);
        a = a + tmp;
    }

    for(i=0; i<3; i++){
        scanf("%d", &tmp);
        b = b + tmp;
    }

    scanf("%d", &n);

    for(i=0; i<n; i++){
        if(a > 0) a = a - 5;
        else if(b > 0) b = b - 10;
    }

    if(a <= 0 && b <= 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
