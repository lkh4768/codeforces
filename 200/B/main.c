#include<stdio.h>

int main()
{
    double n, p = 0, i, tmp;
    
    scanf("%lf", &n);

    for(i=0; i<n; i++){
        scanf("%lf", &tmp);
        p = p+tmp;
    }

    printf("%.12lf", p/n);

    return 0;
}
