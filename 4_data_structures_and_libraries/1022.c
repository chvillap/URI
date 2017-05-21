// https://www.urionlinejudge.com.br/judge/en/problems/view/1022

#include <stdio.h>

int gcd(int a, int b)
{
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
    int N;

    scanf("%d", &N);
    getchar();

    for (; N > 0; --N) {
        char line[30];
        int n1, d1, n2, d2;
        int nr, dr, ns, ds, x;
        char op;

        fgets(line, 30, stdin);
        sscanf(line, "%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

        switch (op) {
            case '+':
                nr = n1 * d2 + n2 * d1;
                dr = d1 * d2;
                break;
            case '-':
                nr = n1 * d2 - n2 * d1;
                dr = d1 * d2;
                break;
            case '*':
                nr = n1 * n2;
                dr = d1 * d2;
                break;
            case '/':
                nr = n1 * d2;
                dr = n2 * d1;
        }

        x = gcd(nr, dr);
        ns = nr / x;
        ds = dr / x;

        if (ds < 0) {
            ns *= -1;
            ds *= -1;
        }

        printf("%d/%d = %d/%d\n", nr, dr, ns, ds);
    }

    return 0;
}
