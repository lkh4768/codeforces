#include<stdio.h>

int a[100];

int main()
{
    int n, k, i, j, max = 0, min = 101;

    scanf("%d %d", &n, &k);

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(max < a[i]) max = a[i];
        if(min > a[i]) min = a[i];
    }

    if(max - min > k){
        printf("NO\n");
        return 0;
    }

    printf("YES\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < a[i]; j++){
            printf("%d ", (j % k) + 1);
        }
        printf("\n");
    }

    return 0;
}
