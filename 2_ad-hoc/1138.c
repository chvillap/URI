/*
#include <stdio.h>
#include <string.h>

int main()
{
    while (1) {
        int A, B;
        int i, counts[10];

        scanf("%d%d", &A, &B);

        if (!A && !B)
            break;

        memset(counts, 0, sizeof(int) * 10);

        while (A <= B) {
            int aux = A;
            while (aux > 0) {
                ++counts[aux % 10];
                aux /= 10;
            }
            ++A;
        }

        for (i = 0; i < 9; ++i)
            printf("%d ", counts[i]);
        printf("%d\n", counts[9]);
    }


    return 0;
}
*/
