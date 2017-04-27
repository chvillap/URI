// https://www.urionlinejudge.com.br/judge/en/problems/view/1246

#include <stdio.h>

#define MAX_LENGTH 16

struct vehicle {
    int plate;
    int length;
};

int main()
{
    int plLength, numEvents;
    char line[MAX_LENGTH];

    while (fgets(line, MAX_LENGTH, stdin) != NULL) {
        int i, j, k, plate, length, billing = 0;
        char event;
        struct vehicle pl[1000];

        sscanf(line, "%d %d", &plLength, &numEvents);

        for (i = 0; i < plLength; ++i) {
            pl[i].plate = 0;
            pl[i].length = plLength - i;
        }

        for (i = 0; i < numEvents; ++i) {
            fgets(line, MAX_LENGTH, stdin);
            sscanf(line, "%c %d", &event, &plate);

            if (event == 'C') {
                sscanf(line, "%c %d %d", &event, &plate, &length);

                for (j = 0; j < plLength; ++j) {
                    if (!pl[j].plate && pl[j].length >= length) {
                        for (k = j; k < j + length; ++k) {
                            pl[k].plate = plate;
                            pl[k].length = length - k + j;
                        }
                        billing += 10;
                        break;
                    }
                }
            } else /*if (event == 'S')*/ {
                for (j = 0; j < plLength; ++j) {
                    if (pl[j].plate == plate) {
                        int emptyBeg, emptyEnd, emptyLength;

                        emptyBeg = j;
                        for (k = j - 1; k >= 0 && !pl[k].plate; --k)
                            emptyBeg = k;

                        for (k = j; pl[k].plate == plate; ++k)
                            pl[k].plate = 0;
                        emptyEnd = k - 1;

                        for (; k < plLength && !pl[k].plate; ++k)
                            emptyEnd = k;

                        emptyLength = emptyEnd - emptyBeg + 1;
                        for (k = emptyBeg; k <= emptyEnd; ++k)
                            pl[k].length = emptyLength - k + emptyBeg;

                        break;
                    }
                }
            }
        }

        printf("%d\n", billing);
    }

    return 0;
}
