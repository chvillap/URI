// https://www.urionlinejudge.com.br/judge/en/problems/view/1118

#include <stdio.h>

int main()
{
    int option;
    float nota1, nota2;

    do {
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

        while (1) {
            puts("novo calculo (1-sim 2-nao)");
            scanf("%d", &option);
            if (option == 1 || option == 2)
                break;
        }
    } while (option != 2);

    return 0;
}
