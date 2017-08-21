#include<stdio.h>
#include<string.h>

char q[101];
int di[101];
int a[27];

int main()
{
    int k, len, i, d = 1;

    scanf("%d", &k);
    scanf("%s", q);

    len = strlen(q);
    di[0] = 1;
    a[q[0] - 96] = 1;

    for(i = 1; i < len; i++){
        if(k == d) break;
        if(a[q[i] - 96] == 0){
            di[i] = 1;
            a[q[i] - 96] = 1;
            d++;
        }
    }

    if(k != d) printf("NO\n");
    else{
        printf("YES");
        for(i = 0; i < len; i++){
            if(di[i] == 1) printf("\n");
            printf("%c", q[i]);
        }
    }

    return 0;
}
