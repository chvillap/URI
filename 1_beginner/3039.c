// https://www.urionlinejudge.com.br/judge/en/problems/view/3039

#include <stdio.h>

int main()
{
    int N;
    int cars = 0, dolls = 0;
    char name[256], letter;

    scanf("%d", &N);

    while (N) {
        scanf("%s %c\n", name, &letter);

        if (letter == 'F')
            ++dolls;
        else
            ++cars;

        --N;
    }

    printf("%d carrinhos\n%d bonecas\n", cars, dolls);

    return 0;
}

