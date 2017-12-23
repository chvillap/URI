// https://www.urionlinejudge.com.br/judge/en/problems/view/1542

#include <stdio.h>

int main()
{
    int Q, D, P;
    int pages;

    while (1) {
        scanf("%d%d%d", &Q, &D, &P);
        if (!Q)
            break;

        pages = P * Q * D / (P - Q);

        if (pages == 1)
            printf("%d pagina\n", pages);
        else
            printf("%d paginas\n", pages);
    }

    return 0;
}
