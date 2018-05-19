// https://www.urionlinejudge.com.br/judge/en/problems/view/1150

#include <stdio.h>

int main()
{
    int X, Z;
    int i, terms = 0, sum = 0;

    scanf("%d%d", &X, &Z);
    while (Z <= X)
        scanf("%d", &Z);

    i = X;
    while (sum <= Z) {
        sum += i;
        ++terms;
        ++i;
    }

    printf("%d\n", terms);

    return 0;
}
