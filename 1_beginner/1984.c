// https://www.urionlinejudge.com.br/judge/en/problems/view/1984

#include <stdio.h>
#include <string.h>

int main()
{
    char number[12], ch;
    int n, h, i;

    fgets(number, 12, stdin);
    n = strlen(number) - 1;
    h = n / 2;

    for (i = 0; i < h; ++i) {
        ch = number[i];
        number[i] = number[n-i-1];
        number[n-i-1] = ch;
    }
    number[n] = '\0';
    puts(number);

    return 0;
}
