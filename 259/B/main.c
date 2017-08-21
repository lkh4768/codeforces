#include<stdio.h>

int ms[3][3];

int main()
{
    int i, j;

    for(i = 0; i < 3; i++){
        scanf("%d %d %d", &ms[i][0], &ms[i][1], &ms[i][2]);
    }

    ms[1][1] = (ms[0][1] + ms[0][2] - ms[1][0] - ms[1][2] + ms[2][0] + ms[2][1])/2;
    ms[0][0] = ms[1][1] + ms[1][0] + ms[1][2] - (ms[0][1] + ms[0][2]);
    ms[2][2] = ms[1][1] + ms[1][0] + ms[1][2] - (ms[2][0] + ms[2][1]);

    for(i = 0; i < 3; i++){
        printf("%d %d %d\n", ms[i][0], ms[i][1], ms[i][2]);
    }

    return 0;
}
