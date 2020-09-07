// https://www.urionlinejudge.com.br/judge/en/problems/view/2328

#include <stdio.h>

int main()
{
    int N, I, result = 0;

    scanf("%d", &N);

    while (N) {
        scanf("%d", &I);
        result += (I - 1);
        --N;
    }

    printf("%d\n", result);

    return 0;
}
