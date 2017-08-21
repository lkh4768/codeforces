#include<stdio.h>

int w[301];

int main()
{
   int n, sum = 0, d = 0, i;

   scanf("%d", &n);
   for(i=0; i<n; i++){
       scanf("%d", &w[i]);
       sum = sum + w[i];
   }

   i = 0;
   while(1){
       //printf("sum: %d, w[i]: %d, i: %d, d: %d\n", sum, w[i], i, d);

       if(w[i] > 0){
           printf("P");
           sum--;
           w[i]--;
           if(sum == 0) break;
       }
      
       if(d == 0) printf("R");
       else printf("L");

       if(d == 0) i++;
       else i--;

       if(i == n-1) d = 1;
       if(i == 0) d = 0;
   }

   printf("\n");

   return 0;
}
