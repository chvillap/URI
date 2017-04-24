// https://www.urionlinejudge.com.br/judge/en/problems/view/2486

#include <stdio.h>
#include <string.h>

int main()
{
    int T;

    while (1) {
        scanf("%d\n", &T);

        if (T > 0) {
            int i;
            int intake = 0;

            for (i = 0; i < T; ++i) {
                char line[31], *food;
                int N, j = 0;

                fgets(line, 30, stdin);

                sscanf(line, "%d", &N);
                while (line[j] != ' ')
                    ++j;
                food = line + j + 1;

                if (!strncmp(food, "suco de laranja", 15))
                    intake += N * 120;
                else if (!strncmp(food, "morango fresco", 14))
                    intake += N * 85;
                else if (!strncmp(food, "mamao", 5))
                    intake += N * 85;
                else if (!strncmp(food, "goiaba vermelha", 15))
                    intake += N * 70;
                else if (!strncmp(food, "manga", 5))
                    intake += N * 56;
                else if (!strncmp(food, "laranja", 7))
                    intake += N * 50;
                else if (!strncmp(food, "brocolis", 8))
                    intake += N * 34;
            }

            if (intake < 110)
                printf("Mais %d mg\n", 110 - intake);
            else if (intake > 130)
                printf("Menos %d mg\n", intake - 130);
            else
                printf("%d mg\n", intake);
        } else
            break;
    }

    return 0;
}
