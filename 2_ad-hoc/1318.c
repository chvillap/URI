// https://www.urionlinejudge.com.br/judge/en/problems/view/1318

#include <stdio.h>
#include <string.h>

int main()
{
    int tickets, persons;
    int counts[20001];
    int i, t, cloned;

    while (1) {
        scanf("%d %d", &tickets, &persons);

        if (!tickets && !persons)
            break;

        memset(counts, 0, sizeof(counts));

        for (i = 0; i < persons; ++i) {
            scanf("%d", &t);

            ++counts[t];
        }

        for (i = 1, cloned = 0; i <= tickets; ++i) {
            if (counts[i] > 1)
                ++cloned;
        }

        printf("%d\n", cloned);
    }

    return 0;
}
