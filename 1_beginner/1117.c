// https://www.urionlinejudge.com.br/judge/en/problems/view/1117

#include <stdio.h>

int main()
{
    int i = 2;
    float nota1, nota2;

    while (1) {
        scanf("%f", &nota1);
        if (nota1 < 0.f || nota1 > 10.f)
            puts("nota invalida");
        else
            break;
    }
    while (1) {
        scanf("%f", &nota2);
        if (nota2 < 0.f || nota2 > 10.f)
            puts("nota invalida");
        else
            break;
    }
    printf("media = %.2f\n", (nota1 + nota2) / 2.f);

    return 0;
}
