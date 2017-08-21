#include<stdio.h>

int main()
{
    int n, i, sec = 0, ph, ch;

    scanf("%d", &n);
    scanf("%d", &ph);

    sec = ph + n;

    for(i = 1; i < n; i++){
        scanf("%d", &ch);
        if(ph > ch) sec = sec + ph - ch;
        else sec = sec + ch - ph;
        sec++;
        ph = ch;
    }

    printf("%d\n", sec);

    return 0;
}
