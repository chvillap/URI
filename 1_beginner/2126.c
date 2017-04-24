// https://www.urionlinejudge.com.br/judge/en/problems/view/2126

#include <stdio.h>
#include <string.h>

int main()
{
    char N1[34], N2[34];
    int caseNum = 0;

    while(scanf("%s\n%s", N1, N2) != EOF) {
        int subsequences = 0;
        int pos = -1;
        int len1 = strlen(N1);
        int len2 = strlen(N2);
        int i, j = 0;

        printf("Caso #%d:\n", ++caseNum);

        while (j < len2) {
            while (j < len2 && N1[0] != N2[j])
                ++j;

            if (j < len2) {
                pos = j;
                i = 0;
                while (i < len1 && j < len2 && N1[i] == N2[j]) {
                    ++i;
                    ++j;
                }
                if (i == len1)
                    ++subsequences;
            }
        }

        if (!subsequences)
            printf("Nao existe subsequencia\n\n");
        else {
            printf("Qtd.Subsequencias: %d\n", subsequences);
            printf("Pos: %d\n\n", pos + 1);
        }
    }

    return 0;
}
