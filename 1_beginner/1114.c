// https://www.urionlinejudge.com.br/judge/en/problems/view/1114

#include <stdio.h>

int main()
{
    while (1) {
        int password;

        scanf("%d", &password);

        if (password == 2002) {
            puts("Acesso Permitido");
            break;
        } else
            puts("Senha Invalida");
    }

    return 0;
}
