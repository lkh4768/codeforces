#include<stdio.h>

int main()
{
    int n, m=5, tmp, i = 0, t = 1, j;

    scanf("%d", &n);

    tmp = n;

    while(tmp>=0){
        i++;
        tmp = tmp - m;
        m = m*2;
    }

    for(j=1; j<i; j++) t = t * 2;

    i = 0;
    tmp = tmp + (m/2);

    while(tmp>0){
        i++;
        tmp = tmp-t;
    }

    if(i == 1) printf("Sheldon\n");
    else if(i == 2) printf("Leonard\n");
    else if(i == 3) printf("Penny\n");
    else if(i == 4) printf("Rajesh\n");
    else printf("Howard\n");

    return 0;
}
