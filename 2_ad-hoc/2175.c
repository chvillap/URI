// https://www.urionlinejudge.com.br/judge/en/problems/view/2175

#include <stdio.h>

int main()
{
    float O, B, I;

    scanf("%f%f%f", &O, &B, &I);

    if (O < B && O < I)
        puts("Otavio");
    else if (B < O && B < I)
        puts("Bruno");
    else if (I < O && I < B)
        puts("Ian");
    else
        puts("Empate");

    return 0;
}
