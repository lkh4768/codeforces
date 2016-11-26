#include<stdio.h>

int min = 999999999, n;
int i[20002];

int func(int t, int a, int c)
{
    //printf("%d %d %d %d\n", t, a, c, min);
    if(a < 0 || (i[a] < c && i[a] > 0)) return 0;
    if(t <= a){
        if(min > c+a-t) min = c+a-t;
        return min;
    }
    
    i[a] = c;
    func(t, a-1, c+1);
    func(t, a*2, c+1);
}

int main()
{
    int m, c = 0, mh, mr, r;

    scanf("%d %d", &n, &m);

    mh = m/2;
    mr = m%2;

    if(mr == 1 || n > m) r = func(m, n, 0);
    else{
        r = func(mh, n, 0);
        r++;
    }

    printf("%d\n", r);
    return 0;
}
