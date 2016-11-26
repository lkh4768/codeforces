#include<stdio.h>

int m[3], tmp[3];

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d %d %d", &tmp[0], &tmp[1], &tmp[2]); 

        for(j=0; j<3; j++){
            m[j] = m[j] + tmp[j];
        }
    }

    if((m[0] == 0) && (m[1] == 0) && (m[2] == 0)) printf("YES\n");
    else printf("NO\n");

    return 0;
}
