#include<stdio.h>

int gcd(int n, int m){
    int max = 1, tmp, i;

    if(n > m){
        tmp = m;
        m = n;
        n = tmp;
    }

    for(i=1; i<=n; i++){
        if(n%i == 0 && m%i == 0) max = i;
    }

    return max;
}

int main()
{
    int a, b, n, i=2;

    scanf("%d %d %d", &a, &b, &n);

    while(n != 0){
        if(i%2 == 0) n = n - gcd(a, n);
        else n = n - gcd(b, n);

        i++;
    }

    printf("%d\n", (i+1)%2);

    return 0;

}
