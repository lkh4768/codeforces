#include<stdio.h>

int main()
{
    int n, i, j, middle, tmp;

    scanf("%d", &n);

    middle = n/2;

    for(i=0; i<n; i++){

        if(i > middle) tmp = n - i - 1;
        else tmp = i;

        for(j=0; j<n; j++){
            if(((middle-tmp) <= j) && ((middle+tmp) >= j)) printf("D");
            else printf("*");
        }
        printf("\n");
    }

    return 0;
}
