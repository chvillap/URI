// https://www.urionlinejudge.com.br/judge/en/problems/view/2483

#include <stdio.h>
#include <string.h>

int main()
{
    int I;
    char scream[10012] = "Feliz nat";

    scanf("%d", &I);

    memset(scream + 9, 'a', I);
    strcat(scream + 9 + I, "l!");

    puts(scream);

    return 0;
}
