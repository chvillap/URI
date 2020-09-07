// https://www.urionlinejudge.com.br/judge/en/problems/view/1515

#include <stdio.h>
#include <string.h>

int main()
{
    int N, A, T, Afirst;
    char name[51], nameFirst[51];

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;

        Afirst = 9999;
        while (N) {
            scanf("%s%d%d", name, &A, &T);

            if (A - T < Afirst) {
                Afirst = A - T;
                strcpy(nameFirst, name);
            }
            --N;
        }
        puts(nameFirst);
    }

    return 0;
}
