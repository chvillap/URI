// https://www.urionlinejudge.com.br/judge/en/problems/view/1277

#include <stdio.h>
#include <string.h>

int main()
{
    int T, N, i, first;
    char names[100][51], attendances[100][1000], *ptr;
    double sum, size;

    scanf("%d", &T);

    for (; T > 0; --T) {
        scanf("%d", &N);

        for (i = 0; i < N; ++i)
            scanf("%s", names[i]);

        for (i = 0; i < N; ++i)
            scanf("%s", attendances[i]);

        first = 1;
        for (i = 0; i < N; ++i) {
            sum = size = 0.0;
            for (ptr = attendances[i]; *ptr != '\0'; ++ptr) {
                switch (*ptr) {
                    case 'P':
                        sum += 1.0;
                    case 'A':
                        size += 1.0;
                }
            }
            if (sum / size < 0.75) {
                if (first) {
                    printf("%s", names[i]);
                    first = 0;
                } else
                    printf(" %s", names[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}
