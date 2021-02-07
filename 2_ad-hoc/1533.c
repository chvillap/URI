// https://www.urionlinejudge.com.br/judge/en/problems/view/1533

#include <stdio.h>

int main()
{
    int N, V[1000];
    int i, max, ind;

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;
        
        for (i = 0, max = 0; i < N; ++i) {
            scanf("%d", &V[i]);
            if (V[i] > max) {
                max = V[i];
                ind = i;
            }
        }

        V[ind] = 0;
        for (i = 0, max = 0; i < N; ++i) {
            if (V[i] > max) {
                max = V[i];
                ind = i;
            }
        }

        printf("%d\n", ind + 1);
    }

    return 0;
}