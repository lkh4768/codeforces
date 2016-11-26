#include<stdio.h>

int coin[101];

int main()
{
    int n, m=0, mv=0, nv=0, i, j, max;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &coin[i]);
        nv = nv + coin[i];
    }

    for(i=0; i<n; i++){
        max = coin[i];
        for(j=i; j<n; j++){
            if(max < coin[j]){
                max = coin[j];
                coin[j] = coin[i];
                coin[i] = max;
             }
        }
    }

    while(mv <= (nv-mv)){
        mv = mv + coin[m];
        m++;
    }

    printf("%d\n", m);
    return 0;
}
