#include<stdio.h>

int main()
{
    int n, i;
    long long int maxY = -1000000001, minY = 1000000001, maxX = -1000000001, minX = 1000000001, p[2];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%llu", &p[0]);
        scanf("%llu", &p[1]);

        if(maxY < p[1]){
            maxY = p[1];
        }
        if(minY > p[1]){
            minY = p[1];
        }

        if(maxX < p[0]){
            maxX = p[0];
        }
        if(minX > p[0]){
            minX = p[0];
        }
    }

    long long int gapY = maxY - minY, gapX = maxX - minX;

    if(gapY > gapX)
        printf("%llu\n", gapY * gapY);
    else
        printf("%llu\n", gapX * gapX);

    return 0;
}
