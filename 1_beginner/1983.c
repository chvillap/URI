// https://www.urionlinejudge.com.br/judge/en/problems/view/1983

#include <stdio.h>

int main()
{
    int n, m, best;
    float note, max = -1.0;

    scanf("%d", &n);

    while (n) {
        scanf("%d%f", &m, &note);
        
        if (note > max) {
            max = note;
            best = m;
        }
        --n;
    }

    if (max < 8.0)
        puts("Minimum note not reached");
    else
        printf("%d\n", best);

    return 0;
}