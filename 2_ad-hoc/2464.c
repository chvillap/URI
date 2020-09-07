// https://www.urionlinejudge.com.br/judge/en/problems/view/2464

#include <stdio.h>

int main()
{
    char permut[26], msg[10001];
    char permut_rev[26], *ptr;
    int i;

    scanf("%s", permut);
    scanf("%s", msg);

    for (i = 0; i < 26; ++i)
        permut_rev[permut[i] - 'a'] = i + 'a';

    for (ptr = msg; *ptr != '\0'; ++ptr)
        *ptr = permut_rev[*ptr - 'a'];

    puts(msg);

    return 0;
}
