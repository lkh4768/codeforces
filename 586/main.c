#include<stdio.h>

int fa[50], sa[50], b[51];

int main()
{
    int n, i, j, min1 = 99999999, min2 = 99999999, sas = 0, fas = 0, s;

    scanf("%d", &n);
    
    for(i = 0; i < n - 1; i++) scanf("%d", &fa[i]);
    for(i = 0; i < n - 1; i++) scanf("%d", &sa[i]);
    for(i = 0; i < n; i++) scanf("%d", &b[i]);

    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++) fas = fas + fa[j];
        for(j = i; j < n-1; j++) sas = sas + sa[j];

        s = fas + sas + b[i];

        if(min1 > s){
            min2 = min1;
            min1 = s;
        }
        else if(min2 > s) min2 = s;
        sas = 0;
        fas = 0;
    }

    printf("%d\n", min1 + min2);

    return 0;
}
