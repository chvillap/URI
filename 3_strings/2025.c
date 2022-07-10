// https://www.beecrowd.com.br/judge/en/problems/view/2025

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char string[102], *s;

    scanf("%d\n", &N);

    while (N) {
        fgets(string, 102, stdin);

        s = string;
        while (s != NULL) {
            s = strstr(s, "oulupukk");
            if (s != NULL) {
                *(s - 1) = 'J';
                *(s + 8) = 'i';
                s += 9;
            }
        }

        printf("%s", string);
        --N;
    }

    return 0;
}
