// https://www.urionlinejudge.com.br/judge/pt/problems/view/1437

#include <stdio.h>

int mod(int x, int n)
{
    return (x % n + n) % n;
}

int main()
{
    int N, direction;
    char *p, commands[10000];

    while (1) {
        scanf("%d", &N);
        if (!N)
            break;
        
        scanf("%s", commands);
        for (direction = 0, p = commands; *p != '\0'; ++p) {
            if (*p == 'D')
                direction = mod(direction + 1, 4);
            else // if (*p == 'E')
                direction = mod(direction - 1, 4);
        }

        switch (direction) {
            case 0: puts("N"); break;
            case 1: puts("L"); break;
            case 2: puts("S"); break;
            case 3: puts("O"); break;
        }
    }

    return 0;
}
