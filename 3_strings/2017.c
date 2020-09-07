// https://www.urionlinejudge.com.br/judge/en/problems/view/2017

#include <stdio.h>
#include <string.h>

int hamming(char *x, char *y)
{
    char *px = x, *py = y;
    int dist = 0;

    while (*px != '\0' && *py != '\0') {
        dist += (*px != *py);
        ++px;
        ++py;
    }

    return dist;
}

int main()
{
    char x[100001];
    char y[5][100001];
    int k, i, len_x, dist, min_dist, answer;

    scanf("%s%d%s%s%s%s%s", x, &k, y[0], y[1], y[2], y[3], y[4]);

    len_x = strlen(x);
    answer = -1;
    min_dist = k + 1;

    for (i = 0; i < 5; ++i) {
        dist = hamming(x, y[i]);
        if (dist < min_dist) {
            answer = i;
            min_dist = dist;
        }
    }

    if (answer == -1)
        puts("-1");
    else
        printf("%d\n%d\n", answer + 1, min_dist);

    return 0;
}
