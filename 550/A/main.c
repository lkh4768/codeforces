#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100001], *sub;
    gets(s);
    if ((sub = strstr(s, "AB")) != NULL && strstr(sub + 2, "BA") != NULL) puts("YES");
    else if ((sub = strstr(s, "BA")) != NULL && strstr(sub + 2, "AB") != NULL) puts("YES");
    else puts("NO");
    return 0;
}
