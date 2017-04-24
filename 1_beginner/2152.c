// https://www.urionlinejudge.com.br/judge/en/problems/view/2152

#include <stdio.h>

int main()
{
    int testCases;
    int i;

    scanf("%d", &testCases);

    for (i = 0; i < testCases; ++i) {
        int hour, minute, open;

        scanf("%d %d %d", &hour, &minute, &open);

        printf("%02d:%02d - %s", hour, minute,
            (open ? "A porta abriu!\n" : "A porta fechou!\n"));
    }

    return 0;
}
