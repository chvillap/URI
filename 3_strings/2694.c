// https://www.urionlinejudge.com.br/judge/en/problems/view/2694

#include <stdio.h>

int main()
{
    int N;
    int i, len, sum = 0;
    char line[15];

    scanf("%d", &N);

    while (N) {
        scanf("%s", line);

        sum = (line[2] - '0') * 10 + (line[3] - '0') +
              (line[5] - '0') * 100 + (line[6] - '0') * 10 + (line[7] - '0') +
              (line[11] - '0') * 10 + (line[12] - '0');

        printf("%d\n", sum);
        --N;
    }


    return 0;
}
