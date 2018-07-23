// https://www.urionlinejudge.com.br/judge/en/problems/view/1189

#include <stdio.h>

int main()
{
    char op;
    int i, j;
    double M[12][12], result;

    scanf("%c", &op);

    for (i = 0; i < 12; ++i)
        for (j = 0; j < 12; ++j)
            scanf("%lf", &M[i][j]);

    for (j = 0, result = 0.0; j < 5; ++j)
        for (i = j + 1; i < 11 - j; ++i)
            result += M[i][j];

    if (op == 'M')
        result /= 30.0;

    printf("%.1lf\n", result);

    return 0;
}
