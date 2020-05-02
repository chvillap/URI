// https://www.urionlinejudge.com.br/judge/en/problems/view/2987

#include <stdio.h>

int main()
{
    char L;

    scanf("%c", &L);

    printf("%d\n", (int)(L - 'A') + 1);

    return 0;
}