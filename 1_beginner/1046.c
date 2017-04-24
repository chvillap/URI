// https://www.urionlinejudge.com.br/judge/en/problems/view/1046

#include <stdio.h>

int main()
{
    int start, end;

    scanf("%d %d", &start, &end);

    printf("O JOGO DUROU %d HORA(S)\n", end - start + (start >= end) * 24);

    return 0;
}
