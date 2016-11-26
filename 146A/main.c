#include<stdio.h>

int main()
{
    int n, f = 0, l = 0, i;
    char t;
    
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        scanf("%c", &t);
        if(t == '\n') scanf("%c", &t);

        if(i <= n/2) f = f + t;
        if(i > n-(n/2)) l = l + t;

        if(!(t == '4' || t == '7')){
            printf("NO\n");
            return 0;
        }
    }

    if(f/2 == l/2) printf("YES\n");
    else printf("NO\n");

    return 0;
}

