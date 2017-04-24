// https://www.urionlinejudge.com.br/judge/en/problems/view/2160

#include <stdio.h>
#include <string.h>

int main()
{
    char line[502];

    fgets(line, 501, stdin);

    if (strlen(line) - 1 <= 80)
        puts("YES");
    else
        puts("NO");

    return 0;
}
