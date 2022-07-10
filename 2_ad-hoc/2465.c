// https://www.beecrowd.com.br/judge/en/problems/view/2465

#include <stdio.h>

int s_num[100][100];
int s_dir[100][100];
int s_flag[100][100];
int count;

inline void s_action(int i, int j, int N) {
    int k, ii, jj;

    s_flag[i][j] = 1;
    ++count;

    for (k = 0; k < 4; ++k) {
        s_dir[i][j] = (s_dir[i][j] + 1) % 4;

        switch (s_dir[i][j]) {
            case 0:
                ii = i - 1;
                jj = j;
                break;
            case 1:
                ii = i;
                jj = j + 1;
                break;
            case 2:
                ii = i + 1;
                jj = j;
                break;
            case 3:
                ii = i;
                jj = j - 1;
                break;
        }

        if (!(ii < 0 || ii >= N || jj < 0 || jj >= N)) {
            if (s_num[ii][jj] >= s_num[i][j] && !s_flag[ii][jj])
                s_action(ii, jj, N);
        }
    }
}

int main() {

    int N, I, J;
    int i, j;

    scanf("%d%d%d", &N, &I, &J);

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            scanf("%d", &s_num[i][j]);
            s_dir[i][j] = 0;
            s_flag[i][j] = 0;
        }
    }

    count = 0;
    s_action(I - 1, J - 1, N);

    printf("%d\n", count);
    
    return 0;
}
