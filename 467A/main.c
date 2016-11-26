#include<stdio.h>

int room[2];

int main()
{
    int i, n, count = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d", &room[0], &room[1]);

        if((room[0]+2) <= room[1]) count++;
    }

    printf("%d\n", count);

    return 0;
}
