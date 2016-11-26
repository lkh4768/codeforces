#include<stdio.h>

int main(){

    int n, i, j, numberOfMaxCleanRows = 0, rowState = 0, rowStates[10000] = {0,};
    char cellState;

    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            scanf("%c", &cellState);
            
            if(cellState != '\n')
               rowState = rowState + ((cellState - 48) * j);
            else
               j--; 
        }
        rowStates[rowState]++;
        rowState = 0;
    }

    for(i = 0; i < 10000; i++){
        if(rowStates[i] > numberOfMaxCleanRows)
            numberOfMaxCleanRows = rowStates[i];
    }
    
    printf("%d\n", numberOfMaxCleanRows);

    return 0;
}
