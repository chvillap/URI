// https://www.beecrowd.com.br/judge/en/problems/view/2044

#include <stdio.h>

int main() {
    int N, P;
    int sum, count;

    while (1) {
        scanf("%d", &N);
        if (N == -1)
            break;

        sum = count = 0;
        
        while (N) {
            scanf("%d", &P);
            sum += P;

            if (!(sum % 100))
                ++count;
            
            --N;
        }

        printf("%d\n", count);
    }

    return 0;
}
