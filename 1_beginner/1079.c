// https://www.urionlinejudge.com.br/judge/en/problems/view/1079

#include <stdio.h>

int main()
{
    int N;
    float a, b, c;

    scanf("%d", &N);

    while (N > 0) {
        scanf("%f%f%f", &a, &b, &c);
        printf("%.1f\n", (2*a + 3*b + 5*c) / 10.f);
        --N;
    }


    return 0;
}
