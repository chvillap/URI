// https://www.urionlinejudge.com.br/judge/en/problems/view/1865

#include <stdio.h>
#include <string.h>

int main()
{
    int C, N;
    char name[256];

    scanf("%d", &C);

    while (C) {
        scanf("%s%d", name, &N);
        if (!strcmp(name, "Thor"))
            puts("Y");
        else
            puts("N");
        --C;
    }

    return 0;
}