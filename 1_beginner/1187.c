// https://www.urionlinejudge.com.br/judge/en/problems/view/1187

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

    for (i = 0, result = 0.0; i < 5; ++i)
        for (j = i + 1; j < 11 - i; ++j)
            result += M[i][j];

    if (op == 'M')
        result /= 30.0;

    printf("%.1lf\n", result);

    return 0;
}
