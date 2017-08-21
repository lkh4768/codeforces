#include<stdio.h>
#include<math.h>

int main(){

    int m, n, i, j, flag = 0, tm;

    scanf("%d %d", &n, &m);

    for(i = n + 1; i <= 50; i++){

        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){ 
            tm = i;
            break;
        }
        else flag = 0;
    }

    if(m == tm) printf("YES\n");
    else printf("NO\n");

    return 0;
}
