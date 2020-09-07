// https://www.urionlinejudge.com.br/judge/en/problems/view/2356

#include <stdio.h>
#include <string.h>

int main()
{
    char dna[101], code[101];

    while (scanf("%s%s", dna, code) != EOF) {
        if (strstr(dna, code))
            puts("Resistente");
        else
            puts("Nao resistente");
    }

    return 0;
}
