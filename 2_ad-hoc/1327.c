// https://www.urionlinejudge.com.br/judge/en/problems/view/1327

#include <stdio.h>
#include <string.h>

void min(int *beg, int *end, int *minvalue, int *mincount)
{
    *minvalue = 14;
    int *p = beg;

    while (p < end) {
        if (*p < *minvalue) {
            *minvalue = *p;
            *mincount = 1;
        } else if (*p == *minvalue)
            *mincount += 1;
        ++p;
    }
}

int main()
{
    while (1) {
        int N, deck[52];
        char names[20][17];
        int i, j, k, beg, end, minvalue, mincount, playing[20], remaining;

        scanf("%d", &N);
        if (!N)
            break;

        for (i = 0; i < N; ++i)
            scanf("%s", (char*) &names[i]);

        for (i = 0; i < 52; ++i)
            scanf("%d", &deck[i]);

        memset(playing, 1, N * sizeof(int));

        beg = mincount = 0;
        end = remaining = N;

        while (remaining > mincount && end <= 52) {
            min(&deck[beg], &deck[end], &minvalue, &mincount);

            if (mincount == remaining)
                break;

            for (i = end-1; i >= beg; --i) {
                if (deck[i] == minvalue) {
                    for (j = 0, k = -1; k < i - beg; ++j) {
                        if (playing[j])
                            ++k;
                    }
                    playing[j-1] = 0;
                    --remaining;
                }
            }

            beg = end;
            end += remaining;
        }

        for (i = 0; i < N; ++i) {
            if (playing[i])
                printf("%s ", names[i]);
        }
        putchar('\n');
    }

    return 0;
}
