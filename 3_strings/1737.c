// https://www.urionlinejudge.com.br/judge/en/problems/view/1737

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct digram_freq_t {
    char digram[3];
    int freq;
};

int rank(const void *x, const void *y) {
    struct digram_freq_t *df1 = (struct digram_freq_t *) x;
    struct digram_freq_t *df2 = (struct digram_freq_t *) y;

    if (df1->freq == df2->freq)
        return strcmp(df1->digram, df2->digram);

    return df2->freq - df1->freq;
}

int main()
{
    while (1) {
        int n, i, j, k, length, sum_freq;
        struct digram_freq_t digram_freqs[65536];
        char text[5121];

        scanf("%d", &n);
        if (!n)
            break;
        getchar();

        for (i = 0, k = 0; i < 256; ++i) {
            for (j = 0; j < 256; ++j, ++k) {
                digram_freqs[k].digram[0] = (char) i;
                digram_freqs[k].digram[1] = (char) j;
                digram_freqs[k].digram[2] = '\0';
                digram_freqs[k].freq = 0;
            }
        }

        for (i = 0, j = 0; i < n; ++i) {
            fgets(text + j, 81, stdin);

            length = strlen(text + j);
            j += length - 1;
        }
        text[j] = '\0';

        sum_freq = 0;
        for (i = 1; i < j; ++i) {
            ++digram_freqs[text[i - 1] * 256 + text[i]].freq;
            ++sum_freq;
        }

        qsort(digram_freqs, 65536, sizeof(struct digram_freq_t), rank);

        for (i = 0; i < 5; ++i)
            printf("%s %d %.6f\n", digram_freqs[i].digram, digram_freqs[i].freq,
                (float) digram_freqs[i].freq / sum_freq);

        putchar('\n');
    }

    return 0;
}
