// https://www.urionlinejudge.com.br/judge/en/problems/view/1262

#include <stdio.h>

int main()
{
    char trace[51], *ptr;
    int procs, clockCycles, contiguousReads;

    while (scanf("%s%d", trace, &procs) != EOF) {
        clockCycles = 0;
        contiguousReads = 0;
        ptr = trace;

        while (*ptr != '\0') {
            if (*ptr == 'W') {
                ++clockCycles;
                contiguousReads = 0;
            } else {
                if (!contiguousReads)
                    ++clockCycles;
                contiguousReads = (contiguousReads + 1) % procs;
            }
            ++ptr;
        }

        printf("%d\n", clockCycles);
    }

    return 0;
}
