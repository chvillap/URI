// https://www.urionlinejudge.com.br/judge/en/problems/view/1864

#include <stdio.h>

int main()
{
    char quote[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int N;

    scanf("%d", &N);
    quote[N] = '\0';
    puts(quote);

    return 0;
}