// https://www.beecrowd.com.br/judge/en/problems/view/3170

#include <stdio.h>

int main() {
    int B, G;
    int lack;

    scanf("%d%d", &B, &G);

    lack = G / 2 - B;

    if (lack > 0)
        printf("Faltam %d bolinha(s)\n", lack);
    else
        puts("Amelia tem todas bolinhas!");

    return 0;
}
