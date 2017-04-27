// https://www.urionlinejudge.com.br/judge/en/problems/view/1245

#include <stdio.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        int i, number, boots[31][2], pairs = 0;
        char foot;

        memset(boots, 0, sizeof(boots));

        for (i = 0; i < N; ++i) {
            scanf("%d %c", &number, &foot);

            ++boots[number - 30][foot == 'E' ? 0 : 1];
        }

        for (i = 0; i < 31; ++i)
            pairs += MIN(boots[i][0], boots[i][1]);

        printf("%d\n", pairs);
    }

    return 0;
}
