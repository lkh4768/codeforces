#include<stdio.h>

int main()
{
    int x1, y1, x2, y2, rx, ry, r;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    rx = (x1 > x2)? x1-x2 : x2-x1;
    ry = (y1 > y2)? y1-y2 : y2-y1;

    r = (rx > ry)? rx : ry;

    printf("%d\n", r);

    return 0;
}
