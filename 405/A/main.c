#include<stdio.h>

int array[101];
int result[101];

int main()
{
    int n, max = 0, i, tmp, j;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &tmp);

        if(tmp > max) max = tmp;

        for(j=0; j<tmp; j++) array[j]++;
    }

    for(i=0; i<n; i++){

        for(j=0; j<max; j++){
            if(array[j] > 0){
               result[n-1-i]++;
               array[j]--;
            }
        }
    }

    for(i=0; i<n; i++) printf("%d ", result[i]);
    printf("\n");

    return 0;
}
