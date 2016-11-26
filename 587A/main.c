#include<stdio.h>
#include<math.h>

int main()
{
    int n, count = 0, tmp, i;
    float w, r, sum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%f", &w);

        sum = sum + w;

        r = log2l(sum);
        tmp = r;

        if(tmp != r) count++;
    }

    if(n == 1) printf("1\n");
    else printf("%d\n", count);

    return 0;
}
