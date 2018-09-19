// https://www.urionlinejudge.com.br/judge/en/problems/view/2702

#include <stdio.h>

int main()
{
    int Ca, Ba, Pa, Cr, Br, Pr;
    int result = 0;

    scanf("%d%d%d%d%d%d", &Ca, &Ba, &Pa, &Cr, &Br, &Pr);

    if (Ca < Cr)
        result += Cr - Ca;
    if (Ba < Br)
        result += Br - Ba;
    if (Pa < Pr)
        result += Pr - Pa;

    printf("%d\n", result);

    return 0;
}
