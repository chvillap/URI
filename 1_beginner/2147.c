// https://www.urionlinejudge.com.br/judge/en/problems/view/2147

#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    char word[10001];
    int i;

    scanf("%d", &C);

    for (i = 0; i < C; ++i) {
        scanf("%s", word);

        printf("%.2lf\n", strlen(word) * 0.01);
    }

    return 0;
}
