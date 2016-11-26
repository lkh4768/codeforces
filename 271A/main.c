#include<stdio.h>

int d[4];

int main()
{
    int n, i, j, k, f=0;

    scanf("%d", &n);

    for(i=n+1; i<=9012; i++){
        d[0] = i/1000;
        d[1] = (i%1000)/100;
        d[2] = (i%100)/10;
        d[3] = i%10;
        for(j=0; j<4; j++){
            for(k=j+1; k<4; k++){
                if(d[j] == d[k]){
                    f=1;
                    break;
                }
            }
            if(f == 1) break;
        }

        if(f == 0) break;
        f = 0;
    }
    
    printf("%d\n", i);

    return 0;
}
