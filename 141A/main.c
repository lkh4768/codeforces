#include<stdio.h>
#include<string.h>

int s[26];

int main(){
   int f = 0, i;
   char c;
   
   while(f < 3){
       scanf("%c", &c);
       if(c == '\n') f++;
       else{
           if(f == 2 && s[c-65] > 0) s[c-65]--;
           else s[c-65]++;
       }
   }

   for(i=1; i<26; i++){
       s[0] = s[0] + s[i];
   }
   
   if(s[0] == 0) printf("YES\n");
   else printf("NO\n");

   return 0;
}
