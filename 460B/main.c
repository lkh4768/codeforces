#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char s[10];
long int x[100];

int main()
{
    long int a, b, c, n, count = 0, len, k = 0, i, j;

    scanf("%li %li %li", &a, &b, &c);

    for(i=1; i<=81 && (n = b*(pow(i,a))+c) > 0; i++){
        sprintf(s, "%li", n);
        len = strlen(s);

        for(j=0; j<len; j++) k = k + (s[j]-48);

        if(k == i){
            count++;
            x[count] = n;
        }
        //printf("i: %d, n: %d, k: %d\n", i, n, k);
        k = 0;
    }

    printf("%li\n", count);
    for(i=1; i<=count; i++) printf("%li ", x[i]);
    printf("\n");

    return 0;
}
