#include<stdio.h>

char s[301];

int main()
{
    int n, t, i, j;
    char a, b;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s", s);
        t = i - (n/2);

        for(j=0; j<n; j++){
            if(i == 0 && j == 0) a = s[j];
            if(i == 0 && j == 1) b = s[j];
            if(a == b){
                printf("NO\n");
                return 0;
            }

            if(j == (n/2) - t || j == (n/2) + t){
                if(a != s[j]){
                    printf("NO\n");
                    return 0;
                }
            }
            else{
                if(b != s[j]){
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    printf("YES\n");
    return 0;
}
