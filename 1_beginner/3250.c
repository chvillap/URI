// https://www.beecrowd.com.br/judge/en/problems/view/3250

#include <stdio.h>
#include <string.h>
#include <math.h>

#define abs(x) (((x) >= 0) ? (x) : (-x))

int main() {
    int f, s, g, u, d;
    int i, impossible, p_up, p_down, pushes = 0;
    unsigned char visited[1000001];

    scanf("%d%d%d%d%d", &f, &s, &g, &u, &d);

    memset(visited, 0, sizeof(visited));
    impossible = 0;

    while (!impossible && s != g) {
        visited[s] = 1;
        if (s < g) {
            p_up = (int) ceil((double) (g - s) / u);
            pushes += p_up;
            for (i = 0; i < p_up; ++i) {
                visited[s] = 1;
                s += u;
            }
        } else {
            p_down = (int) ceil((double) (s - g) / d);
            pushes += p_down;
            for (i = 0; i < p_down; ++i) {
                visited[s] = 1;
                s -= d;
            }
        }
        if (visited[s])
            impossible = 1;
    }

    if (impossible)
        puts("use the stairs");
    else
        printf("%d\n", pushes);

    return 0;
}
