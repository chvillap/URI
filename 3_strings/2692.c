// https://www.urionlinejudge.com.br/judge/en/problems/view/2692

#include <stdio.h>

int main()
{
    char dict[256], phrase[10001], *p;
    char E, S;
    int N, M, i;

    for (i = 0; i < 256; ++i)
        dict[i] = (char) i;

    scanf("%d%d\n", &N, &M);

    while (N) {
        scanf("%c %c\n", &E, &S);

        dict[E] = S;
        dict[S] = E;
        --N;
    }

    while (M) {
        fgets(phrase, 10001, stdin);

        for (p = phrase; *p != '\n' && *p != '\0'; ++p)
            *p = dict[*p];
        *p = '\0';

        puts(phrase);
        --M;
    }

    return 0;
}
