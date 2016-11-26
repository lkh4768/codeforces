#include<stdio.h>

int a[101];
int r[101];

int main()
{
    int n, k, min = 10001, i, minI, flag = 0, to = 0;

    scanf("%d %d", &n, &k);

    for(i=1; i<=n; i++) scanf("%d", &a[i]);

    while(k > 0){
        for(i=1; i<=n; i++){
            if(min > a[i]){
                min = a[i];
                minI = i;
            }
        }
        k = k - min;
        if(k >= 0){
            to++;
            flag = 1;
            r[minI] = 1;
        }
        a[minI] = 10001;
        min = 10001;
    }

    if(flag == 0) printf("0\n");
    else{
        printf("%d\n", to);
        for(i=1; i<=n; i++){
            if(r[i] == 1) printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
