#include<stdio.h>

char s[51];

int main()
{
    int n, x, i, j;

    scanf("%d %d", &n, &x);
    scanf("%s", s);

    for(i=1; i<=x; i++){
        for(j=0; j<n; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
