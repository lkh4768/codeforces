#include<stdio.h>

int h[100001];
int kit[100001][2];
int r[100001][2];

int main()
{
    int n, i, th, ta;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &kit[i][0], &kit[i][1]);
        h[kit[i][0]]++;
    }

    for(i = 0; i < n; i++){
        r[i][0] = n - 1 + h[kit[i][1]];
        r[i][1] = n - 1 - h[kit[i][1]];
    }

    for(i = 0; i < n; i++) printf("%d %d\n", r[i][0], r[i][1]);

    return 0;
}
