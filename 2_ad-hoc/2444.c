// https://www.beecrowd.com.br/judge/en/problems/view/2444

#include <stdio.h>

int main() {
    int V, T, A;
    int volume;

    scanf("%d%d", &V, &T);
    volume = V;

    while (T) {
        scanf("%d", &A);

        volume += A;
        if (volume < 0)
            volume = 0;
        else if (volume > 100)
            volume = 100;
        
        --T;
    }

    printf("%d\n", volume);

    return 0;
}
