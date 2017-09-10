// https://www.urionlinejudge.com.br/judge/en/problems/view/1074

#include <stdio.h>

int main()
{
    int N, num;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%d", &num);

        if (num) {
            if (num % 2)
                printf("ODD ");
            else
                printf("EVEN ");

            if (num > 0)
                puts("POSITIVE");
            else
                puts("NEGATIVE");
        } else
            puts("NULL");

        --N;
    }

    return 0;
}
