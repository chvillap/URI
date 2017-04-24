// https://www.urionlinejudge.com.br/judge/pt/problems/view/2161

#include <stdio.h>

double sqrt10(int step)
{
    if (!step)
        return 6.0;
    return 6.0 + 1.0 / sqrt10(step - 1);
}


int main()
{
    int N, i;

    scanf("%d", &N);

    printf("%.10lf\n", sqrt10(N) - 3.0);

    return 0;
}
