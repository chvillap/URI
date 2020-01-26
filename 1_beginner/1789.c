// https://www.urionlinejudge.com.br/judge/en/problems/view/1789

#include <stdio.h>

int main()
{
    int L;
    int V[500], *ptr;
    int i, maxspeed;

    while (scanf("%d", &L) != EOF) {
        for (i = 0, ptr = V, maxspeed = 0; i < L; ++i, ++ptr) {
            scanf("%d", ptr);
            if (*ptr > maxspeed)
                maxspeed = *ptr;
        }
        if (maxspeed >= 20)
            puts("3");
        else if (maxspeed >= 10)
            puts("2");
        else
            puts("1");
    }

    return 0;
}