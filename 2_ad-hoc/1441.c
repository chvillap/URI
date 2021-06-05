// https://www.urionlinejudge.com.br/judge/en/problems/view/1441

#include <stdio.h>

int main()
{
    int H, Hmax;

    while (1) {
        scanf("%d", &H);
        if (!H)
            break;

        Hmax = H;
        while (H != 1) {
            if (H % 2)
                H = 3 * H + 1;
            else
                H /= 2;

            if (H > Hmax)
                Hmax = H;
        }

        printf("%d\n", Hmax);
    }

    return 0;
}
