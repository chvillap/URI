// https://www.urionlinejudge.com.br/judge/en/problems/view/2690

#include <stdio.h>

int main()
{
    int N;
    char T[256];

    T['G'] = T['Q'] = T['a'] = T['k'] = T['u'] = '0';
    T['I'] = T['S'] = T['b'] = T['l'] = T['v'] = '1';
    T['E'] = T['O'] = T['Y'] = T['c'] = T['m'] = T['w'] = '2';
    T['F'] = T['P'] = T['Z'] = T['d'] = T['n'] = T['x'] = '3';
    T['J'] = T['T'] = T['e'] = T['o'] = T['y'] = '4';
    T['D'] = T['N'] = T['X'] = T['f'] = T['p'] = T['z'] = '5';
    T['A'] = T['K'] = T['U'] = T['g'] = T['q'] = '6';
    T['C'] = T['M'] = T['W'] = T['h'] = T['r'] = '7';
    T['B'] = T['L'] = T['V'] = T['i'] = T['s'] = '8';
    T['H'] = T['R'] = T['j'] = T['t'] = '9';

    scanf("%d\n", &N);

    while (N) {
        char letters[101], *pin;
        char numbers[101], *pout;

        fgets(letters, 101, stdin);

        for (pin = letters, pout = numbers; *pin != '\n'; ++pin) {
            if (*pin != ' ') {
                *pout++ = T[*pin];
                if (pout - numbers >= 12)
                    break;
            }
        }
        *pout = '\0';

        puts(numbers);
        --N;
    }

    return 0;
}
