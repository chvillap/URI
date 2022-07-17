// https://www.beecrowd.com.br/judge/en/problems/view/3141

#include <stdio.h>
#include <string.h>

int main()
{
    char name[52];
    int d0, m0, y0;
    int d1, m1, y1;
    int age;

    fgets(name, 52, stdin);
    name[strlen(name) - 1] = '\0';

    scanf("%d/%d/%d%d/%d/%d", &d1, &m1, &y1, &d0, &m0, &y0);

    age = y1 - y0;
    if (m1 < m0)
        --age;
    else if (m1 == m0) {
        if (d1 < d0)
            --age;
    }

    if (d0 == d1 && m0 == m1)
        puts("Feliz aniversario!");
    printf("Voce tem %d anos %s.\n", age, name);

    return 0;
}
