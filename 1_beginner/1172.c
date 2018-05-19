// https://www.urionlinejudge.com.br/judge/en/problems/view/1172

#include <stdio.h>

int main()
{
    int i, array[10];
    int *ptr = array;

    for (i = 0; i < 10; ++i) {
        scanf("%d", ptr);

        if (*ptr <= 0)
            *ptr = 1;
        ++ptr;
    }

    for (ptr = array, i = 0; i < 10; ++ptr, ++i)
        printf("X[%d] = %d\n", i, *ptr);

    return 0;
}
