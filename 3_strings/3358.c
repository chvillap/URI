// https://www.beecrowd.com.br/judge/en/problems/view/3358

#include <stdio.h>
#include <ctype.h>

int main()
{
    int N, count;
    char surname[43], *p;

    scanf("%d", &N);

    while (N) {
        scanf("%s", surname);

        count = 0;
        for (p = surname; *p != '\0' && count < 3; ++p) {
            switch (toupper(*p)) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    count = 0; break;
                default:
                    ++count;
            }
        }
        if (count < 3)
            printf("%s eh facil\n", surname);        
        else
            printf("%s nao eh facil\n", surname);

        --N;
    }

    return 0;
}
