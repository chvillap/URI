// https://www.beecrowd.com.br/judge/en/problems/view/3157

#include <stdio.h>
#include <string.h>

int main() {
    int m, test, operand, result;
    int i, mult[99];
    char expr[401], *p;

    test = 1;
    while (1) {
        scanf("%d\n", &m);
        if (!m)
            break;
        fgets(expr, 401, stdin);

        for (p = expr, i = 0; *p != '\n'; ++p) {
            if (*p == '+')
                mult[i++] = 1;
            else if (*p == '-')
                mult[i++] = -1;
        }

        p = strtok(expr, "+-");
        sscanf(p, "%d", &operand);
        result = operand;

        i = 0;
        p = strtok(NULL, "+-");
        while (p != NULL) {
            sscanf(p, "%d", &operand);
            result += mult[i++] * operand;
            p = strtok(NULL, "+-");
        }
        
        printf("Teste %d\n%d\n\n", test, result);
        ++test;
    }

    return 0;
}
