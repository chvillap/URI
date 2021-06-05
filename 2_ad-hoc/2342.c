// https://www.urionlinejudge.com.br/judge/en/problems/view/2342

#include <stdio.h>

int main()
{
    int N, P, Q, result;
    char op;

    scanf("%d%d %c %d", &N, &P, &op, &Q);

    if (op == '+')
        result = P + Q;
    else /* if (op == '*') */
        result = P * Q;

    if (result <= N)
        puts("OK");
    else
        puts("OVERFLOW");

    return 0;
}
