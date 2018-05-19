// https://www.urionlinejudge.com.br/judge/en/problems/view/1632

#include <stdio.h>

int variations(char ch)
{
    switch (ch) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'S':
        case 's':
            return 3;
    }
    return 2;
}

int main()
{
    int T;

    scanf("%d", &T);

    while (T) {
        char password[17], *ptr;
        int totalVariations = 1;

        scanf("%s", password);

        for (ptr = password; *ptr != '\0'; ++ptr)
            totalVariations *= variations(*ptr);

        printf("%d\n", totalVariations);

        --T;
    }

    return 0;
}
