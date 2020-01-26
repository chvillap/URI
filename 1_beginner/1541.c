// https://www.urionlinejudge.com.br/judge/en/problems/view/1541

#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    double total_area;
    double landside;

    while (1) {
        scanf("%d", &A);
        if (!A)
            break;
        scanf("%d%d", &B, &C);

        total_area = 100.0 * A * B / C;
        landside = sqrt(total_area);

        printf("%d\n", (int) landside);
    }

    return 0;
}
