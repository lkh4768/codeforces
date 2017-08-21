#include<stdio.h>

int t[5001];
int wa[3];

int main()
{
    int n, w = 5001, i, j, k, flag = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &t[i]);
        wa[t[i]-1]++;
    }

    for(i=0; i<3; i++){
        if(w > wa[i]) w = wa[i];
    }

    printf("%d\n", w);

    for(i=0; i<w; i++){
        for(j=1; j<=3; j++){
            for(k=0; k<n; k++){
                if(t[k] == j){
                    printf("%d", k+1);
                    t[k] = 0;
                    break;
                }
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
