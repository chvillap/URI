// https://www.beecrowd.com.br/judge/en/problems/view/3049

#include <stdio.h>

int main() {
    int B, T;
    float A_left, A_half;

    scanf("%d%d", &B, &T);

    A_left = (B + T) * 70 * 0.5;
    A_half = 160 * 70 * 0.5;
    
    if (A_left > A_half)
        puts("1");
    else if (A_left < A_half)
        puts("2");
    else
        puts("0");

    return 0;
}
