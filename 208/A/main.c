#include<stdio.h>
#include<string.h>

char s[201];

int main()
{
    int i;

    scanf("%s", s);

    for(i=0; i<strlen(s); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(i != 0 && !(s[i-1] == 'B' && s[i-2] == 'U' && s[i-3] == 'W')) printf(" ");
            i=i+2;
        }
        else printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}
