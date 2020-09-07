// https://www.urionlinejudge.com.br/judge/en/problems/view/2157

#include <stdio.h>
#include <string.h>

char* strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main()
{
    int C, B, E;
    int i, n, dig;
    char sequence[50001]; // 1*10 + 2*90 + 3*900 + 4*9000 + 5*2222 + 1
    char *mirrored;

    scanf("%d", &C);

    while (C) {
        scanf("%d%d", &B, &E);

        for (i = B, n = 0; i <= E; ++i) {
            dig = sprintf(sequence + n, "%d", i);
            n += dig;
        }
        sequence[n] = '\0';

        printf("%s", sequence);
        mirrored = strrev(sequence);
        printf("%s\n", mirrored);

        --C;
    }

    return 0;
}
