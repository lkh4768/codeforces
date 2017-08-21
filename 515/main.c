#include<stdio.h>

int main(){
    int a, b, s;

    scanf("%d %d %d", &a, &b, &s);

    if(a < 0) a = (-a);
    if(b < 0) b = (-b);

    if((((s-(a+b))%2) == 0) && ((s-(a+b))>=0)) printf("YES\n");
    else printf("NO\n");

    return 0;
}
