#include<stdio.h>

int main()
{
    int sh, sm, th, tm, ph, pm;

    scanf("%d:%d", &sh, &sm);
    scanf("%d:%d", &th, &tm);

    ph = sh - th;
    pm = sm - tm;

    if(pm < 0){
        pm = 60 + pm;
        ph--;
    }
    if(ph < 0) ph = ph + 24;

    if(ph < 10 && pm < 10) printf("0%d:0%d", ph, pm);
    else{
        if(ph < 10) printf("0%d:%d", ph, pm);
        else if(pm < 10) printf("%d:0%d", ph, pm);
        else printf("%d:%d", ph, pm);
    }

    return 0;
}
