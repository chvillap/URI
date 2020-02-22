// https://www.urionlinejudge.com.br/judge/en/problems/view/2581

#include <stdio.h>

int main()
{
    int N;
    char input[100001];

    scanf("%d", &N);
    getchar();

    while (N) {
        fgets(input, 100000, stdin);
        puts("I am Toorg!");
        --N;
    }

    return 0;
}