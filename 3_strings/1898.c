// https://www.urionlinejudge.com.br/judge/en/problems/view/1898

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char row1[61], row2[61];
    char cpf[12], num1[61], num2[61];
    int r1, r2, n1, n2, c;
    int i, point;
    long double fnum1, fnum2;

    scanf("%s%s", row1, row2);
    r1 = strlen(row1);
    r2 = strlen(row2);

    c = n1 = 0;
    point = -1;
    for (i = 0; i < r1 && (point < 0 || n1 <=    point + 2); ++i) {
        if (c < 11) {
            if (isdigit(row1[i]))
                cpf[c++] = row1[i];
        } else {
            if (row1[i] == '.') {
                point = n1;
                num1[n1++] = row1[i];
            } else if (isdigit(row1[i]))
                num1[n1++] = row1[i];
        }
    }
    cpf[c] = num1[n1] = '\0';

    n2 = 0;
    point = -1;
    for (i = 0; i < r2 && (point < 0 || n2 <= point + 2); ++i) {
            if (row2[i] == '.') {
                point = n2;
                num2[n2++] = row2[i];
            } else if (isdigit(row2[i]))
                num2[n2++] = row2[i];
    }
    num2[n2] = '\0';

    sscanf(num1, "%Lf", &fnum1);
    sscanf(num2, "%Lf", &fnum2);

    printf("cpf %s\n%.2Lf\n", cpf, fnum1 + fnum2);

    return 0;
}
