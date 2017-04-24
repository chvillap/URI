// https://www.urionlinejudge.com.br/judge/en/problems/view/2176

#include <stdio.h>
#include <string.h>

int main()
{
    char message[102];
    int i, length, ones = 0;

    scanf("%s", message);
    length = strlen(message);

    for (i = 0; i < length; ++i)
        if (message[i] == '1')
            ++ones;

    if (ones % 2)
        strcat(message, "1");
    else
        strcat(message, "0");
    puts(message);

    return 0;
}
