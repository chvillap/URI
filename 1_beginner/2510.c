// https://www.urionlinejudge.com.br/judge/en/problems/view/2510

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    char name[26];

    scanf("%d", &T);

    while (T) {
        scanf("%s", name);
        
        if (!strcmp(name, "Batmain"))
            puts("N");
        else
            puts("Y");
        
        --T;
    }

    return 0;
}