#include<stdio.h>

char d[1001], b[1001];

int main()
{
    int n, i, count = 0, s;
    char m;

    scanf("%d", &n);
    scanf("%s", d);
    scanf("%s", b);

    for(i=0; i<n; i++){
        s = d[i] - b[i];
        if(s < 0) s = s * (-1);
        if(s > 5) s = 10 - s;
        count = count + s;
    }

    printf("%d\n", count);
    
    return 0;
}

