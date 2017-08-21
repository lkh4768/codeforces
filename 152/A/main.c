#include<stdio.h>

char a[101][101];
char max[101];

int main()
{
    int n, m, i, j, count = 0;

    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%c", &a[i][j]);
            if(a[i][j] == '\n') scanf("%c", &a[i][j]);
            if(max[j] < a[i][j]) max[j] = a[i][j];
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(max[j] == a[i][j]){
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
