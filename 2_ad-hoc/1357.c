// https://www.urionlinejudge.com.br/judge/en/problems/view/1357

#include <stdio.h>

#define CHR2INT(x) ((int) ((x) - '0'))
#define INT2CHR(x) ((char) ((x) + '0'))

char braille[3][21] = {
    ".**.*.*****.*****..*",
    "**..*....*.**.*****.",
    "...................."
};

int main()
{
    int D;
    char SB, _;
    char msg[3][301];

    while (1) {
        int i, j, k;

        scanf("%d", &D);
        if (!D)
            break;

        scanf("%c%c%c", &_, &SB, &_);

        if (SB == 'S') {
            fgets(msg[0], 101, stdin);

            for (i = 0; i < 3; ++i) {
                for (j = 0; j < D - 1; ++j) {
                    k = CHR2INT(msg[0][j]);
                    printf("%c%c ", braille[i][2 * k], braille[i][2 * k + 1]);
                }
                k = CHR2INT(msg[0][D - 1]);
                printf("%c%c\n", braille[i][2 * k], braille[i][2 * k + 1]);
            }
        } else /* SB == 'B' */ {
            fgets(msg[0], 301, stdin);
            fgets(msg[1], 301, stdin);
            fgets(msg[2], 301, stdin);

            for (j = 0; j < 3 * D; j += 3) {
                for (k = 0; k < 10; ++k) {
                    if (msg[0][j] == braille[0][2 * k] &&
                        msg[0][j + 1] == braille[0][2 * k + 1] &&
                        msg[1][j] == braille[1][2 * k] &&
                        msg[1][j + 1] == braille[1][2 * k + 1] &&
                        msg[2][j] == braille[2][2 * k] &&
                        msg[2][j + 1] == braille[2][2 * k + 1]) {
                        putchar(INT2CHR(k));
                        break;
                    }
                }
            }
            putchar('\n');
        }
    }

    return 0;
}
