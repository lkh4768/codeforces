#include<stdio.h>

int a[101];

int main()
{
    int n, tmp = 0, max = 0, i, j, k;

    scanf("%d", &n);

    for(i=0; i<n; i++) scanf("%d", &a[i]);

    for(i=0; i<n; i++){
        for(j=n-1; j>=i; j--){
            for(k=0; k<n; k++){
                if(k >= i && k <= j) tmp = tmp + 1 - a[k];
                else tmp = tmp + a[k];
            }
            if(max < tmp) max = tmp;
            tmp = 0;
        }
    }

    printf("%d\n", max);

    return 0;
}
