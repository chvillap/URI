// https://www.urionlinejudge.com.br/judge/en/problems/view/2813

#include <stdio.h>

int main()
{
    int N, C = 0, E = 0;
    char SD[10], SN[10];
    int home = 0, work = 0;

    scanf("%d", &N);

    while (N) {
        scanf("%s%s", SD, SN);

        if (SD[0] == 'c') {
            if (!home) {
                home = 1;
                ++C;
            }
            --home;
            ++work;
        }
        if (SN[0] == 'c') {
            if (!work) {
                work = 1;
                ++E;
            }
            --work;
            ++home;
        }

        --N;
    }

    printf("%d %d\n", C, E);

    return 0;
}
