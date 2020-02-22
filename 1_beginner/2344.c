// https://www.urionlinejudge.com.br/judge/en/problems/view/2344

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if (!N)
        puts("E");
    else if (N <= 35)
        puts("D");
    else if (N <= 60)
        puts("C");
    else if (N <= 85)
        puts("B");
    else
        puts("A");

    return 0;
}