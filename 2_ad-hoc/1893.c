// https://www.urionlinejudge.com.br/judge/en/problems/view/1893

#include <stdio.h>

int main()
{
    int p1, p2;

    scanf("%d%d", &p1, &p2);

    if (p2 >= 0 && p2 <= 2)
        puts("nova");
    else if (p2 >= 97 && p2 <= 100)
        puts("cheia");
    else if (p1 < p2)
        puts("crescente");
    else
        puts("minguante");

    return 0;
}
