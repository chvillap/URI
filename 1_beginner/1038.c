// https://www.urionlinejudge.com.br/judge/en/problems/view/1038

#include <stdio.h>

int main()
{
    int code, quantity;

    scanf("%d %d", &code, &quantity);

    switch (code) {
        case 1:
            printf("Total: R$ %.2lf\n", quantity * 4.00);
            break;
        case 2:
            printf("Total: R$ %.2lf\n", quantity * 4.50);
            break;
        case 3:
            printf("Total: R$ %.2lf\n", quantity * 5.00);
            break;
        case 4:
            printf("Total: R$ %.2lf\n", quantity * 2.00);
            break;
        case 5:
            printf("Total: R$ %.2lf\n", quantity * 1.50);
            break;
    }

    return 0;
}
