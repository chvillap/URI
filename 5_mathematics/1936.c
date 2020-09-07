// https://www.urionlinejudge.com.br/judge/en/problems/view/1936

#include <stdio.h>

int main()
{
    int N, k = 0;
    int i, fat[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};

    scanf("%d", &N);

    while (N) {
        for (i = 8; i > 0; --i) {
            while (N >= fat[i]) {
                N -= fat[i];
                ++k;
            }
        }
    }
    printf("%d\n", k);

    return 0;
}
