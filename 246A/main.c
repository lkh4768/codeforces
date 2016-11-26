#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n <= 2) printf("-1\n");
    else{
        while(n > 0){
            printf("%d ", n);
            n--;
        }
    }
    return 0;
}
