#include<stdio.h>

int main()
{
    int n, d = 0, fs = 0, f, i;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &f);
        fs = fs + f;
    }

    for(i=1; i<=5; i++){
        if((fs + i)%(n+1) != 1){
            //printf("%d %d %d\n", (fs + i)%n, i, fs);
            d++;
        }
    }

    printf("%d\n", d);

    return 0;
}
