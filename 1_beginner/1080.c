// https://www.urionlinejudge.com.br/judge/en/problems/view/1080

#include <stdio.h>
#include <limits.h>

int main()
{
    int i, val, max_val = -INT_MAX, max_pos = -1;

    for (i = 1; i <= 100; ++i) {
        scanf("%d", &val);

        if (val > max_val) {
            max_val = val;
            max_pos = i;
        }
    }
    printf("%d\n%d\n", max_val, max_pos);

    return 0;
}
