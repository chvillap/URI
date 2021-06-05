// https://www.urionlinejudge.com.br/judge/en/problems/view/1553

#include <stdio.h>
#include <string.h>

int main()
{
    int N, K, P, i, counts[101], faq;

    while (1) {
        scanf("%d%d", &N, &K);
        if (!(N || K))
            break;

        memset(counts, 0, sizeof(counts));

        for (i = 0; i < N; ++i) {
            scanf("%d", &P);
            ++counts[P];
        }

        faq = 0;
        for (i = 1; i <= 100; ++i)
            if (counts[i] >= K)
                ++faq;

        printf("%d\n", faq);
    }

    return 0;
}
