// https://www.urionlinejudge.com.br/judge/en/problems/view/2717

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, A, B;

    scanf("%d%d%d", &N, &A, &B);

    if (A + B > N)
        puts("Deixa para amanha!");
    else
        puts("Farei hoje!");

    return 0;
}
