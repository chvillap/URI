// https://www.urionlinejudge.com.br/judge/en/problems/view/1070

#include <stdio.h>

int main()
{
    int i, X;

    scanf("%d", &X);

    X += !(X % 2);
    for (i = 0; i < 6; ++i, X += 2)
        printf("%d\n", X);

    return 0;
}
