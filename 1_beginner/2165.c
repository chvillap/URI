// https://www.urionlinejudge.com.br/judge/en/problems/view/2165

#include <stdio.h>
#include <string.h>

int main()
{
    char tweet[502];

    fgets(tweet, 501, stdin);

    if (strlen(tweet) - 1 <= 140)
        puts("TWEET");
    else
        puts("MUTE");

    return 0;
}
