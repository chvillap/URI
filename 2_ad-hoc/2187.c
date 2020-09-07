// https://www.urionlinejudge.com.br/judge/en/problems/view/2187

#include <stdio.h>

int main()
{
    int V, I, J, K, L;
    int n = 0;

    while (1) {
        scanf("%d", &V);
        if (!V)
            break;

        I = V / 50;
        V %= 50;
        J = V / 10;
        V %= 10;
        K = V / 5;
        V %= 5;
        L = V;

        printf("Teste %d\n%d %d %d %d\n\n", ++n, I, J, K, L);
    }

    return 0;
}
