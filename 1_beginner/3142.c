// https://www.beecrowd.com.br/judge/en/problems/view/3142

#include <stdio.h>
#include <string.h>

#define ord(x) (1 + ((int) (x)) - ((int) 'A'))

int mystrcmp(char *s1, char *s2) {
    int len_diff = strlen(s1) - strlen(s2);
    if (len_diff)
        return len_diff;
    return strcmp(s1, s2);
}

int main() {
    char S[11];
    int i, len, index;
    int pow26[] = {1, 26, 676, 17576};

    while (scanf("%s", S) != EOF) {
        if (mystrcmp(S, "XFD") <= 0) {
            len = strlen(S);
            for (i = 0, index = 0; i < len; ++i)
                index += ord(S[i]) * pow26[len - i - 1];
            printf("%d\n", index);
        } else
            puts("Essa coluna nao existe Tobias!");
    }

    return 0;
}
