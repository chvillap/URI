// https://www.urionlinejudge.com.br/judge/en/problems/view/2949

#include <stdio.h>

int main()
{
    int N;
    char S[1000];
    int hobbits = 0, humans = 0, elves = 0, dwarves = 0, mages = 0;

    scanf("%d", &N);

    while (N) {
        scanf("%s%s", S, S);

        switch (S[0]) {
            case 'A': ++dwarves; break;
            case 'E': ++elves; break;
            case 'H': ++humans; break;
            case 'M': ++mages; break;
            case 'X': ++hobbits; break;
        }

        --N;
    }

    printf("%d Hobbit(s)\n"
           "%d Humano(s)\n"
           "%d Elfo(s)\n"
           "%d Anao(s)\n"
           "%d Mago(s)\n",
           hobbits, humans, elves, dwarves, mages);

    return 0;
}