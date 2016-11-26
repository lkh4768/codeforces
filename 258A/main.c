#include<stdio.h>

int main()
{
    char n, prevN = '2';
    int flag = 0;

    while(1){
        scanf("%c", &n);

        if(n == '\n'){
            if(flag == 0){}
            else if(prevN != '2') printf("%c", prevN);
            break;
        } else{
            if(prevN != '2') printf("%c", prevN);
        }

        if(n == '0' && flag == 0){
            prevN = '2';
            flag = 1;
        }
        else prevN = n;

    }
    printf("\n");

    return 0;
}
