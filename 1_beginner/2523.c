// https://www.urionlinejudge.com.br/judge/en/problems/view/2523

#include <stdio.h>

int main()
{
    char alphabet[27], message[10001];
    int N, i, num;

    while (scanf("%s", alphabet) != EOF) {
        scanf("%d", &N);

        for (i = 0; i < N; ++i) {
            scanf("%d", &num);
            message[i] = alphabet[num - 1];
        }

        message[i] = '\0';
        puts(message);
    }

    return 0;
}
