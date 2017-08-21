#include<stdio.h>

int main(){
    int n, max = 0, min = 10001, cur, i, count = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &cur);

        if(i == 0){
            max = cur;
            min = cur;
        }else{
            if(max < cur){
                count++;
                max = cur;
            }

            if(min > cur){
               count++;
               min = cur;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
