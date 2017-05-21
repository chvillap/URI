// https://www.urionlinejudge.com.br/judge/en/problems/view/1364

#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        char line[82], emoticons[100][17], *ptr;
        int N, M, index[100], count = 0;
        int i, j, k;

        scanf("%d%d", &N, &M);
        getchar();

        if (!N && !M)
            break;

        for (i = 0; i < N; ++i) {
            fgets(emoticons[i], 17, stdin);
            emoticons[i][strlen(emoticons[i]) - 1] = '\0';
        }

        for (i = 0; i < M; ++i) {
            fgets(line, 82, stdin);

            memset(index, 0, sizeof(index));

            for (ptr = line; *ptr != '\n'; ++ptr) {
                for (j = 0; j < N; ++j) {
                    if (*ptr == emoticons[j][index[j]])
                        ++index[j];
                    else
                        index[j] = (*ptr == emoticons[j][0]);

                    if (index[j] == strlen(emoticons[j])) {
                        *ptr = ' ';
                        ++count;
                        memset(index, 0, sizeof(index));
                    }
                }
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
