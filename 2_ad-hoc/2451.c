// https://www.beecrowd.com.br/judge/en/problems/view/2451

#include <stdio.h>

int main() {
    int N;
    int i, j, j_inc, j_bound;
    int count, max_count;
    char board[100][101];

    scanf("%d", &N);

    for (i = 0; i < N; ++i)
        scanf("%s", board[i]);
    
    count = 0;
    max_count = 0;
    
    for (i = 0, j = 0; i < N; ++i) {
        j_inc = (i % 2) ? -1 : 1;
        j_bound = (i % 2) ? -1 : N;
        while (j != j_bound) {
            if (board[i][j] == 'o')
                ++count;
            else if (board[i][j] == 'A') {
                if (count > max_count)
                    max_count = count;
                count = 0;
            }
            j += j_inc;
        }
    }
    if (count > max_count)
        max_count = count;
    
    printf("%d\n", max_count);

    return 0;
}
