// https://www.urionlinejudge.com.br/judge/en/problems/view/1168

#include <stdio.h>

int main()
{
    int N;
    char V[102], *ptr;
    int i, count;
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%s", V);

        count = 0;
        ptr = V;
        while (*ptr != '\0') {
            count += leds[*ptr - '0'];
            ++ptr;
        }

        printf("%d leds\n", count);
    }

    return 0;
}
