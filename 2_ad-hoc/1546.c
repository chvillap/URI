// https://www.urionlinejudge.com.br/judge/en/problems/view/1546

#include <stdio.h>

int main()
{
    char names[4][9] = {"Rolien", "Naej", "Elehcim", "Odranoel"};
    int N, K, category;

    scanf("%d", &N);

    while (N) {
        scanf("%d", &K);

        while (K) {
            scanf("%d", &category);
            printf("%s\n", names[category - 1]);

            --K;
        }
        --N;
    }

    return 0;
}
