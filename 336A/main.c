#include<stdio.h>

int main()
{
    int x, y, x1, y1, x2, y2, a, b;

    scanf("%d %d", &x, &y);

    if((x > 0 && y > 0) || (x < 0 && y < 0)) a = -1;
    else a = 1;

    b = y - (x * a);

    if((-1 * (b / a)) < 0){
        x1 = -1 * (b / a);
        y1 = 0;
        x2 = 0;
        y2 = b;
    }
    else{
        x1 = 0;
        y1 = b;
        x2 = -1 * (b / a);
        y2 = 0;
    }

    printf("%d %d %d %d\n", x1, y1, x2, y2);

    return 0;
}
    

