#include<stdio.h>

char s[2], t[2];
char r[20];

int main()
{
    int count = 0, k = 0, i;

    scanf("%s %s", s, t);

    while(!(s[0] == t[0] && s[1] == t[1])){
        //printf("s: %s, t: %s, %d: %c%c\n", s, t, k, r[k-2], r[k-1]);
        if(s[1] > t[1]){
            count++;
            if(s[0] < t[0]){
                r[k] = 'R';
                s[0]++;
                k++;
            }
            else if(s[0] > t[0]){
                r[k] = 'L';
                s[0]--;
                k++;
            }
            r[k] = 'D';
            s[1]--;
            k++;
        }
        else if(s[1] < t[1]){
            count++;
            if(s[0] > t[0]){
                r[k] = 'L';
                s[0]--;
                k++;
            }
            else if(s[0] < t[0]){
                r[k] = 'R';
                s[0]++;
                k++;
            }
            r[k] = 'U';
            s[1]++;
            k++;
        }
        else if((s[0] < t[0]) && (s[1] == t[1])){
            count++;
            r[k] = 'R';
            s[0]++;
            k++;
        }
        else if((s[0] > t[0]) && (s[1] == t[1])){
            count++;
            r[k] = 'L';
            s[0]--;
            k++;
        }
    }

    printf("%d\n", count);
    for(i=0; i<k; i++){
        if((r[i] == 'R' || r[i] == 'L') && (r[i+1] == 'D' || r[i+1] == 'U')){
            printf("%c%c\n", r[i], r[i+1]);
            i++;
        }
        else printf("%c\n", r[i]);
    }
    
    return 0;
}
