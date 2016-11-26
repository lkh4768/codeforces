#include<stdio.h>

int main(){
    char s;
    int cnt = 0;

    while((s = getchar()) != '\n'){
        if(s == '7' || s == '4') cnt++;
    }

    if((cnt == 7 || cnt == 4) && cnt != 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
