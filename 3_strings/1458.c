// https://www.urionlinejudge.com.br/judge/en/problems/view/1458

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define SQR(x) ((x) * (x))
#define KEY(x) (isalpha(x) ? (x) - (int)'a' : 26)

int main()
{
    const double velocity = 30.0;
    const double pressTime = 0.2;

    int keyNums[27] = {
        2, 2, 2,     // a, b, c
        3, 3, 3,     // d, e, f
        4, 4, 4,     // g, h, i
        5, 5, 5,     // j, k, l
        6, 6, 6,     // m, n, o
        7, 7, 7, 7,  // p, q, r, s
        8, 8, 8,     // t, u, v
        9, 9, 9, 9,  // w, x, y, z
        0            // space = 26
    };

    int keyPresses[27] = {
        1, 2, 3,     // a, b, c
        1, 2, 3,     // d, e, f
        1, 2, 3,     // g, h, i
        1, 2, 3,     // j, k, l
        1, 2, 3,     // m, n, o
        1, 2, 3, 4,  // p, q, r, s
        1, 2, 3,     // t, u, v
        1, 2, 3, 4,  // w, x, y, z
        1            // space = 26
    };

    double keyCoords[11][2] = {
        {1.5, 3.5},  // 0
        {0.5, 0.5},  // 1
        {1.5, 0.5},  // 2
        {2.5, 0.5},  // 3
        {0.5, 1.5},  // 4
        {1.5, 1.5},  // 5
        {2.5, 1.5},  // 6
        {0.5, 2.5},  // 7
        {1.5, 2.5},  // 8
        {2.5, 2.5},  // 9
        {2.5, 3.5}   // # = 10
    };

    double moveTime[11][11];
    int i, j;
    for (i = 0; i < 11; ++i) {
        for (j = i; j < 11; ++j) {
            const double distance = sqrt(SQR(keyCoords[i][0] - keyCoords[j][0]) +
                                         SQR(keyCoords[i][1] - keyCoords[j][1]));
            moveTime[i][j] = distance / velocity;
            moveTime[j][i] = moveTime[i][j];
        }
    }

    char message[142];

    while (fgets(message, 142, stdin)) {
        int closestToNext;
        int closestToSharp;
        int thumb[2] = {4, 6};
        int lastKeyNum = -1;
        int nextKeyNum = keyNums[KEY(message[0])];
        double totalTime = 0.0;
        char *ptr = message;

        while (*ptr != '\n') {
            nextKeyNum = keyNums[KEY(*ptr)];

            closestToNext = moveTime[thumb[0]][nextKeyNum] >
                            moveTime[thumb[1]][nextKeyNum];

            if (nextKeyNum == lastKeyNum) {
                closestToSharp = moveTime[thumb[0]][10] >
                                 moveTime[thumb[1]][10];

                totalTime += moveTime[thumb[closestToSharp]][10] +
                             pressTime;
                thumb[closestToSharp] = 10;

                closestToNext = moveTime[thumb[0]][nextKeyNum] >
                                moveTime[thumb[1]][nextKeyNum];

                totalTime += moveTime[thumb[closestToNext]][nextKeyNum] +
                             pressTime * keyPresses[KEY(*ptr)];
            } else {
                totalTime += moveTime[thumb[closestToNext]][nextKeyNum] +
                             pressTime * keyPresses[KEY(*ptr)];
            }

            thumb[closestToNext] = nextKeyNum;
            lastKeyNum = nextKeyNum;
            ++ptr;
        }

        printf("%.2lf\n", totalTime);
    }

    return 0;
}
