#include<stdio.h>

int main()
{
    int n, p = 2, c, i, g = 0;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &c);
        if(p != c) g++;
        p = c;
    }

    printf("%d\n", g);

    return 0;
}
