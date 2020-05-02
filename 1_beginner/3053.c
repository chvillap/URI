// https://www.urionlinejudge.com.br/judge/en/problems/view/3053

#include <stdio.h>

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int N, move;
    char pos;
    int cups[3] = {0, 0, 0};

    scanf("%d\n%c\n", &N, &pos);

    switch (pos) {
        case 'A':
            cups[0] = 1;
            break;
        case 'B':
            cups[1] = 1;
            break;
        case 'C':
            cups[2] = 1;
    }

    while (N) {
        scanf("%d", &move);
        switch (move) {
            case 1:
                swap(&cups[0], &cups[1]);
                break;
            case 2:
                swap(&cups[1], &cups[2]);
                break;
            case 3: 
                swap(&cups[0], &cups[2]);
        }
        --N;
    }

    if (cups[0])
        puts("A");
    else if (cups[1])
        puts("B");
    else
        puts("C");

    return 0;
}
