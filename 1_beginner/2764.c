// https://www.urionlinejudge.com.br/judge/en/problems/view/2764

#include <stdio.h>
#include <string.h>

int main()
{
    char date[9], *day, *month, *year;

    scanf("%s", date);

    day = strtok(date, "/");
    month = strtok(NULL, "/");
    year = strtok(NULL, "/");

    printf("%s/%s/%s\n%s/%s/%s\n%s-%s-%s\n",
        month, day, year, year, month, day, day, month, year);

    return 0;
}
