// https://www.urionlinejudge.com.br/judge/en/problems/view/2651

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[100001], *p;

    scanf("%s", name);

    for (p = name; *p != '\0'; ++p)
        *p = tolower(*p);

    if (strstr(name, "zelda") != NULL)
        puts("Link Bolado");
    else
        puts("Link Tranquilo");

    return 0;
}
