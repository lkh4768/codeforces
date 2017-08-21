#include<stdio.h>
#include<math.h>

int main()
{
    char c;
    int a = 0, b = 0, e = 0, u = 0, i, j;
    float p = 0, r1 = 1, r2 = 1, r3 = 1;

    while(e != 2)
    {
        scanf("%c", &c);
        if(c == '-'){
            if(e == 0) a--;
            else b--;
        }
        else if(c == '+'){
            if(e == 0) a++;
            else b++;
        }
        else if(c == '\n') e++;
        else if(c == '?') u++;
    }

    a = a-b;
    if(a < 0) a = -a;

    if(u == 0 && a == 0) printf("1.000000000000\n");
    else if(u < a) printf("0.000000000000\n");
    else{
        for(i=0; (2*i)-u != a; i++){}

        if(i == u) p = 1;
        else{
            for(j=1; j<=u; j++){
                r1 = r1 * j;
                if(j<=i) r2 = r2 * j;
                if(j<=(u-i)) r3 = r3 * j;
            }
            p = r1/(r2*r3);
        }

        //printf("a: %d, b: %d, u: %d, i: %d , r1: %f, r2: %f, p: %f\n", a, b, u, i, r1, r2, p);
        printf("%.12f\n", p/pow(2, u));
    }

    return 0;
}
