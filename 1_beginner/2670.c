// https://www.urionlinejudge.com.br/judge/en/problems/view/2670

#include <stdio.h>

int main()
{
    int A1, A2, A3;
    int d1, d2, d3;

    scanf("%d%d%d", &A1, &A2, &A3);
   
    d1 = 2*A2 + 4*A3;
    d2 = 2*A1 + 2*A3;
    d3 = 4*A1 + 2*A2;

    if (d1 <= d2 && d1 <= d3)
        printf("%d\n", d1);
    else if (d2 <= d1 && d2 <= d3)
        printf("%d\n", d2);
    else if (d3 <= d1 && d3 <= d2)
        printf("%d\n", d3);

    return 0;
}