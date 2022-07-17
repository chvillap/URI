// https://www.beecrowd.com.br/judge/en/problems/view/1781

#include <stdio.h>
#include <string.h>

int main()
{
    int T, Q, op, x;
    int t, q, i;
    int V, C, length;
    int xv, xc;
    char S[10001];
    int vowels[2][10000]; // 1st row is the char code, and
    int conson[2][10000]; // 2nd row is the position at the original string
    int temp[10000];

    scanf("%d", &T);

    for (t = 1; t <= T; ++t) {
        printf("Caso #%d:\n", t);
        scanf("%s%d", S, &Q);

        length = strlen(S);
        V = C = 0;
        xv = xc = 0;

        for (i = 0; i < length; ++i) {
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' ||
                S[i] == 'o' || S[i] == 'u') {
                // save vowel chars and positions
                vowels[0][V] = (int) S[i];
                vowels[1][V] = i;
                ++V;
            } else {
                // save consonant chars and positions
                conson[0][C] = (int) S[i];
                conson[1][C] = i;
                ++C;
            }
        }
        
        for (q = 0; q < Q; ++q) {
            scanf("%d", &op);

            if (op == 0) {
                // accumulate moves for vowels
                scanf("%d", &x);
                xv += x;
            } else if (op == 1) {
                // accumulate moves for consonants
                scanf("%d", &x);
                xc += x;
            } else {
                // move vowels
                for (i = 0; i < V; ++i)
                    temp[i] = vowels[0][i];
                for (i = 0; i < V; ++i)
                    vowels[0][(i + xv) % V] = temp[i];

                // move consonants
                for (i = 0; i < C; ++i)
                    temp[i] = conson[0][i];
                for (i = 0; i < C; ++i)
                    conson[0][(i + xc) % C] = temp[i];

                // build and print string
                for (i = 0; i < V; ++i)
                    S[vowels[1][i]] = vowels[0][i];
                for (i = 0; i < C; ++i)
                    S[conson[1][i]] = conson[0][i];
                puts(S);

                xv = xc = 0;
            }
        }
    }

    return 0;
}
