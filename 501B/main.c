#include<stdio.h>
#include<string.h>

char news[1000][30];
char olds[1000][30];
char new[30];
char old[30];

int main()
{
    int n, i, j, l = 0, flag = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s %s", old, new);

        for(j = 0; j < l; j++){
            if(strcmp(news[j], old) == 0){
                strcpy(news[j], new); 
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            strcpy(news[l], new);
            strcpy(olds[l], old);
            l++;
        }

        flag = 0;
    }

    printf("%d\n", l);

    for(i = 0; i < l; i++) printf("%s %s\n", olds[i], news[i]);

    return 0;
}

