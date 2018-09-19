// https://www.urionlinejudge.com.br/judge/en/problems/view/1181

#include <stdio.h>

int main()
{
    int i, j, line;
    char operation;
    double M[12][12], result;

    scanf("%d", &line);
    scanf(" %c", &operation);

    for (i = 0; i < 12; ++i)
        for (j = 0; j < 12; ++j)
            scanf("%lf", &M[i][j]);

    for (j = 0, result = 0.0; j < 12; ++j)
        result += M[line][j];

    if (operation == 'M')
        result /= 12.0;

    printf("%.1lf\n", result);

    return 0;
}
