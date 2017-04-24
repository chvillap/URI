// https://www.urionlinejudge.com.br/judge/en/problems/view/1129

#include <stdio.h>

int main()
{
    while (1) {
        int N, i, j;
        int gray[5];

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            int selected = -1;

            for (j = 0; j < 5; ++j)
                scanf("%d", &gray[j]);

            for (j = 0; j < 5; ++j) {
                if (gray[j] <= 127) {
                    if (selected < 0)
                        selected = j;
                    else {
                        selected = -1;
                        break;
                    }
                }
            }
            if (selected < 0)
                puts("*");
            else
                printf("%c\n", 'A' + selected);
        }
    }

    return 0;
}
