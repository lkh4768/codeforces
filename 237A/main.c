#include<stdio.h>

int main()
{
    int n, ph = 99, pm = 99, h, m, c = 1, maxc = 0;

    scanf("%d", &n);

    while(n--){
       scanf("%d %d", &h, &m);

       if(ph == h && pm == m) c++;
       else{
           ph = h;
           pm = m;
           c = 1;
       }

       if(maxc < c) maxc = c;
    }

    printf("%d\n", maxc);

    return 0;
}
