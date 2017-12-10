// https://www.urionlinejudge.com.br/judge/en/problems/view/1943

#include <stdio.h>

int main()
{
    int K;

    scanf("%d", &K);

    if (K == 1)
        puts("Top 1");
    else if (K <= 3)
        puts("Top 3");
    else if (K <= 5)
        puts("Top 5");
    else if (K <= 10)
        puts("Top 10");
    else if (K <= 25)
        puts("Top 25");
    else if (K <= 50)
        puts("Top 50");
    else
        puts("Top 100");

    return 0;
}
