#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long long int n;

    scanf("%llu", &n);
    
    if(n%4 == 0) printf("4\n");
    else printf("0\n");

    return 0;
}
