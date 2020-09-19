// https://www.urionlinejudge.com.br/judge/en/problems/view/2253

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char password[10002], *p;
    int len, invalid, flag_len, flag_num, flag_upper, flag_lower;

    while (fgets(password, 10001, stdin)) {
        invalid = 0;
        flag_len = flag_num = flag_upper = flag_lower = 0;

        len = strlen(password);
        if (password[len - 1] == '\n')
            password[--len] = '\0';

        if (len < 6 || len > 32)
            invalid = 1;

        if (!invalid) {
            for (p = password; *p != '\0' && !invalid; ++p) {
                if (isdigit(*p))
                    flag_num = 1;
                else if (islower(*p))
                    flag_lower = 1;
                else if (isupper(*p))
                    flag_upper = 1;
                else
                    invalid = 1;
            }
        }

        if (!(flag_num && flag_upper && flag_lower))
            invalid = 1;

        if (invalid)
            puts("Senha invalida.");
        else
            puts("Senha valida.");
    }

    return 0;
}
