// https://www.urionlinejudge.com.br/judge/en/problems/view/1564

#include <stdio.h>

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        if (N > 0)
            puts("vai ter duas!");
        else
            puts("vai ter copa!");
    }

    return 0;
}