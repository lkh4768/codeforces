#include<stdio.h>

char weight[10]={'0', 'p', '0', 'n', '0', 'r', '0', '0', '0', 'q'};

int main()
{
    int endPoint = 0, w = 0, b = 0, i;
    char c;

    while(endPoint < 8)
    {
        scanf("%c", &c);
        if(c != '.'){
            
            if(c == 'B' || c =='b') c = c + 12;

            for(i=1; i<=9; i++){
                if(weight[i] == c) b=b+i;
                else if((weight[i]-32) == c) w=w+i;
            }
        }

        if(c == '\n'){
            endPoint++;
        }
    }

    if(w > b) printf("White\n");
    else if(w < b) printf("Black\n");
    else printf("Draw\n");

    return 0;
}
