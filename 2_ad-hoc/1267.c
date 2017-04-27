// https://www.urionlinejudge.com.br/judge/en/problems/view/1267

#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        int N, D, X, i, j;
        int attendees[501];
        char answer[4] = "no";

        scanf("%d %d", &N, &D);
        if (!N && !D)
            break;

        memset(attendees, 0, sizeof(attendees));

        for (i = 0; i < D; ++i) {
            for (j = 0; j < N; ++j) {
                scanf("%d", &X);
                attendees[j] += X;
            }
        }

        for (i = 0; i < D; ++i)
            if (attendees[i] == D) {
                strcpy(answer, "yes");
                break;
            }

        puts(answer);
    }

    return 0;
}
