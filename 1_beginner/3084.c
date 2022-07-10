// https://www.beecrowd.com.br/judge/en/problems/view/3084

#include <stdio.h>

int main() {
    int h, m;
    int hours, minutes;

    while (scanf("%d%d", &h, &m) != EOF) {
        hours = 12 * h / 360;
        minutes = 60 * m / 360;

        printf("%02d:%02d\n", hours, minutes);
    }

    return 0;
}
