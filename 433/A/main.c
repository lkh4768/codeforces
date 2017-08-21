#include<stdio.h>

int n[26];

int main(){
    int count = 0;
    char c;

    while((c = getchar()) != '}'){
       if(!(c == '{' || c == ',' || c == ' ')){
           n[c-97]++;
           if(n[c-97] == 1) count++;
       }
    }

    printf("%d\n", count);

    return 0;
}
