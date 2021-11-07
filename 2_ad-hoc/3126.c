// https://www.beecrowd.com.br/judge/en/problems/view/3126

#include <stdio.h>

int main() {
    int C, X, count = 0;

    scanf("%d", &C);

    while (C) {
        scanf("%d", &X);
        count += X;
        --C;
    }

    printf("%d\n", count);

    return 0;
}

// int main() {
//     int C;
//     int offset, count = 0;
//     char input[2001], bit[2], *ptr;
//
//     scanf("%d\n", &C);
//     fgets(input, 2001, stdin);
//
//     ptr = input;
//     while (sscanf(ptr, "%s%n", bit, &offset) > 0) {
//         if (*bit == '1')
//             ++count;
//         ptr += offset;
//     }
//
//     printf("%d\n", count);
//
//     return 0;
// }
