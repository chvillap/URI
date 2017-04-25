// https://www.urionlinejudge.com.br/judge/en/problems/view/1217

#include <stdio.h>

#define MAX_LENGTH 10000

int main()
{
    int N, i;
    char line[MAX_LENGTH];
    double sumSpent = 0.0, sumConsumed = 0.0;

    fgets(line, MAX_LENGTH, stdin);
    sscanf(line, "%d", &N);

    for (i = 0; i < N; ++i) {
        double spent;
        int consumed = 0;
        char *p, fruits[MAX_LENGTH];

        fgets(line, MAX_LENGTH, stdin);
        sscanf(line, "%lf", &spent);

        fgets(fruits, MAX_LENGTH, stdin);

        p = fruits;
        while (*p != '\0') {
            if (*p++ == ' ')
                ++consumed;
        }
        ++consumed;

        printf("day %d: %d kg\n", i + 1, consumed);

        sumSpent += spent;
        sumConsumed += consumed;
    }

    printf("%.2lf kg by day\n", sumConsumed / N);
    printf("R$ %.2lf by day\n", sumSpent / N);

    return 0;
}
