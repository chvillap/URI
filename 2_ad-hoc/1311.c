// https://www.urionlinejudge.com.br/judge/en/problems/view/1311

#include <stdio.h>

struct Node {
    int prev;
    int next;
};

int main(int argc, char const *argv[])
{
    while (1) {
        int S, B, L, R;
        int i;
        struct Node buddies[100001];

        scanf("%d%d", &S, &B);

        if (!S && !B)
            break;

        for (i = 2; i < S; ++i) {
            buddies[i].prev = i - 1;
            buddies[i].next = i + 1;
        }
        buddies[1].prev = -1;
        buddies[S].next = -1;
        if (S > 1) {
            buddies[1].next = 2;
            buddies[S].prev = S - 1;
        }

        for (i = 0; i < B; ++i) {
            scanf("%d%d", &L, &R);

            if (buddies[L].prev < 0)
                putchar('*');
            else
                printf("%d", buddies[L].prev);

            if (buddies[R].next < 0)
                puts(" *");
            else
                printf(" %d\n", buddies[R].next);

            if (buddies[L].prev >= 0)
                buddies[buddies[L].prev].next = buddies[R].next;
            if (buddies[R].next >= 0)
                buddies[buddies[R].next].prev = buddies[L].prev;
        }
        puts("-");
    }


    return 0;
}
