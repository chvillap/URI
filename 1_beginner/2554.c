// https://www.urionlinejudge.com.br/judge/en/problems/view/2554

#include <stdio.h>

int main()
{
    int N, D, p;
    int i, j, count, success;
    char date[11];

    while (scanf("%d%d", &N, &D) != EOF) {
        success = 0;

        for (i = 0; i < D; ++i) {
            scanf("%s", date);
            count = 0;

            for (j = 0; j < N; ++j) {
                scanf("%d", &p);
                count += p;
            }

            if (!success && count == N) {
                puts(date);
                success = 1;
            }
        }

        if (!success)
            puts("Pizza antes de FdI");
    }

    return 0;
}