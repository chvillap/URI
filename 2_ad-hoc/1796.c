// https://www.urionlinejudge.com.br/judge/en/problems/view/1796

#include <stdio.h>

int main()
{
    int Q, V;
    int i, votes[2] = {0, 0};

    scanf("%d", &Q);

    for (i = 0; i < Q; ++i) {
        scanf("%d", &V);
        ++votes[V];
    }

    if (votes[0] > votes[1])
        puts("Y");
    else
        puts("N");

    return 0;
}
