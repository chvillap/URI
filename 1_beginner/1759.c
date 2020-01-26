// https://www.urionlinejudge.com.br/judge/en/problems/view/1759

#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    
    if (N) {
        while (N > 1) {
            printf("Ho ");
            --N;
        }
        printf("Ho!\n");
    }

    return 0;
}