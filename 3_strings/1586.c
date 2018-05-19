// https://www.urionlinejudge.com.br/judge/en/problems/view/1586

#include <stdio.h>

int main()
{
    while (1) {
        int N, i;
        long long strengths[100000];
        long long teamA = 0, sumA = 0;
        long long teamB = 0, sumB = 0;
        int solution = -1;
        char names[100000][11];
        char *ptr;

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%s", names[i]);

            strengths[i] = 0;
            for (ptr = names[i]; *ptr != '\0'; ++ptr)
                strengths[i] += (long long) *ptr;

            sumB += strengths[i];
            teamB += strengths[i] * (i + 1);
        }

        for (i = 0; i < N && solution < 0; ++i) {
            teamB -= sumB;
            sumB -= strengths[i];

            sumA += strengths[i];
            teamA += sumA;

            if (teamA > teamB)
                break;

            if (teamA == teamB)
                solution = i;
        }

        if (solution < 0)
            puts("Impossibilidade de empate.");
        else
            puts(names[solution]);
    }

    return 0;
}
