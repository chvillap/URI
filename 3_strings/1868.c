// https://www.beecrowd.com.br/judge/en/problems/view/1868

#include <stdio.h>

void draw(int N, int ii, int jj)
{
    int i, j;

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            if (i == ii && j == jj)
                putchar('X');
            else
                putchar('O');
        }
        putchar('\n');
    }
    puts("@");
}

int main()
{
    int N;
    int i, j, ci, cj, delta;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        ci = cj = N / 2;
        i = ci;
        j = cj;

        for (delta = 1; delta <= N/2; ++delta) {
            do
                draw(N, i, j++);
            while (j < cj + delta);
            do
                draw(N, i--, j);
            while (i > ci - delta);
            do
                draw(N, i, j--);
            while (j > cj - delta);
            do
                draw(N, i++, j);
            while (i < ci + delta);
            do
                draw(N, i, j++);
            while (j <= cj);
        }
        do
            draw(N, i, j++);
        while (j < N);
    }

    return 0;
}
