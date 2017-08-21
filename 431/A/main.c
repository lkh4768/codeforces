#include<stdio.h>

int a[4];

int main()
{
    char c;
    int count = 0;

    scanf("%d %d %d %d\n", &a[0], &a[1], &a[2], &a[3]);

    while((c = getchar()) != '\n'){
        count = count + a[c-49];
    }
    
    printf("%d\n", count);

    return 0;
}
