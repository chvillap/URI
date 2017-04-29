// https://www.urionlinejudge.com.br/judge/en/problems/view/1228

#include <stdio.h>

struct competitor {
    int number;
    int position;
};

int main()
{
    int N;

    while (scanf("%d", &N) != EOF) {
        int i, j, n;
        int overtakes = 0;
        struct competitor comp[24];

        for (i = 0; i < N; ++i)
            scanf("%d", &comp[i].number);

        for (i = 0; i < N; ++i) {
            scanf("%d", &n);

            for (j = 0; j < N; ++j)
                if (comp[j].number == n) {
                    comp[j].position = i + 1;
                    break;
                }
        }

        for (i = 1; i < N; ++i) {
            struct competitor tmp = comp[i];
            j = i - 1;
            while (j >= 0 && tmp.position < comp[j].position) {
                comp[j + 1] = comp[j];
                --j;
                ++overtakes;
            }
            comp[j + 1] = tmp;
        }

        printf("%d\n", overtakes);
    }

    return 0;
}
