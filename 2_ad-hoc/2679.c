// https://www.urionlinejudge.com.br/judge/en/problems/view/2679

#include <stdio.h>

int main()
{
    int X;

    scanf("%d", &X);
    printf("%d\n", (X % 2) ? X + 1 : X + 2);

    return 0;
}
