// https://www.urionlinejudge.com.br/judge/en/problems/view/2721

#include <stdio.h>

int main()
{
    char names[9][10] = {"Dasher", "Dancer", "Prancer",
                         "Vixen", "Comet", "Cupid",
                         "Donner", "Blitzen", "Rudolph"};
    int a0, a1, a2, a3, a4, a5, a6, a7, a8;
    int sum_snowballs = 0, remainder;

    scanf("%d%d%d%d%d%d%d%d%d", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8);

    sum_snowballs = a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8;
    remainder = sum_snowballs % 9;

    if (!remainder)
        puts(names[8]);
    else
        puts(names[remainder - 1]);

    return 0;
}
