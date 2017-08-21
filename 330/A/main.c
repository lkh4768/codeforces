#include<stdio.h>

char m[11][11];

int main()
{
    int r, c, rmax = 0, cmax = 0, i, j, flag = 0;
    
    scanf("%d %d", &r, &c);

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%c", &m[i][j]);
            if(m[i][j] == '\n') scanf("%c", &m[i][j]);
            if(m[i][j] == 'S') flag = 1;
        }
        if(flag == 0){
            cmax++;
        }
        flag = 0;
    }

    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            if(m[j][i] == 'S') flag = 1;
        }
        if(flag == 0) rmax++;
        flag = 0;
    }

    printf("%d\n",cmax*c+((rmax*r)-(rmax*cmax)));

    return 0;
}
