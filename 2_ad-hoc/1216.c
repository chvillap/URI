// https://www.urionlinejudge.com.br/judge/en/problems/view/1216

#include <stdio.h>

#define MAX_LENGTH 1000

int main()
{
    char line[MAX_LENGTH];
    int count = 0;
    double dist, average = 0.0;

    while (1) {
        if (fgets(line, MAX_LENGTH, stdin) == NULL)
            break;

        fgets(line, MAX_LENGTH, stdin);
        sscanf(line, "%lf", &dist);

        average += dist;
        ++count;
    }

    printf("%.1lf\n", average / count);

    return 0;
}
