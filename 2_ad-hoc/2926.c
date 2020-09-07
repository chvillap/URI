// https://www.urionlinejudge.com.br/judge/en/problems/view/2926

#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    printf("Ent");
    for (i = 0; i < N; ++i)
        putchar('a');
    printf("o eh N");
    for (i = 0; i < N; ++i)
        putchar('a');
    putchar('t');
    for (i = 0; i < N; ++i)
        putchar('a');
    printf("l!\n");

    return 0;
}
