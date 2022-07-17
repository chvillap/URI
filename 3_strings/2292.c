// https://www.beecrowd.com.br/judge/en/problems/view/2292

#include <stdio.h>

int main()
{
    int N;
    long long C;
    char P[61];

    scanf("%d", &N);

    while (N) {
        char *p;
        long long switches, turnoffs;

        scanf("%s%lld", P, &C);

        turnoffs = C;

        for (p = P; *p != '\0'; ++p) {
            switches = turnoffs;
            turnoffs = (*p == 'O') ? ((switches + 1) / 2) : (switches / 2);
            
            if (switches % 2) {
                if (*p == 'O')
                    *p = 'X';
                else
                    *p = 'O';
            }
        }

        puts(P);
        --N;
    }

    return 0;
}
