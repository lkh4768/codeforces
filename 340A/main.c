#include<stdio.h>

int main()
{
    int x, y, a, b, i, tmp, r, u;

    scanf("%d %d %d %d", &x, &y, &a, &b);
    
    b = b - a;
    
    if(x < y){
        tmp = x;
        x = y;
        y = tmp;
    }

    for(i = x; ;i++){
        if(i%x == 0 && i%y == 0){
            u = i;
            break;
        }
    }

    printf("%d\n", b / u + 1);

    return 0;
}
