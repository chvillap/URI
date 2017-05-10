// https://www.urionlinejudge.com.br/judge/en/problems/view/1367

#include <stdio.h>
#include <string.h>

int main()
{
    int N, time;
    char id, verdict[10], buffer[100];
    int i, j, incorrectCounts[26], correctTimes[26], correctCount, finalTime;

    while (1) {
        scanf("%d", &N);
        getchar();
        if (!N)
            break;

        memset(correctTimes, 0, sizeof(correctTimes));
        memset(incorrectCounts, 0, sizeof(incorrectCounts));
        correctCount = 0;
        finalTime = 0;

        for (i = 0; i < N; ++i) {
            fgets(buffer, 100, stdin);
            sscanf(buffer, "%c%d%s", &id, &time, verdict);

            j = id - 'A';
            if (verdict[0] == 'c') {
                ++correctCount;
                finalTime += time;
                correctTimes[j] = time;
            } else
                ++incorrectCounts[j];
        }

        for (j = 0; j < 26; ++j) {
            if (correctTimes[j] > 0)
                finalTime += incorrectCounts[j] * 20;
        }

        printf("%d %d\n", correctCount, finalTime);
    }

    return 0;
}
