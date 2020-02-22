// https://www.urionlinejudge.com.br/judge/en/problems/view/1924

#include <stdio.h>

int main()
{
    int n;
    char S[101];

    scanf("%d", &n);

    while (n) {
        scanf("%s", S);
        --n;
    }

    puts("Ciencia da Computacao");

    return 0;
}