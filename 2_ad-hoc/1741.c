// https://www.urionlinejudge.com.br/judge/en/problems/view/1741

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define as_int(x) ((int) ((x) - '0'))

struct Tree {
    char value;
    struct Tree *left, *right;
};

struct Tree* buildAST(char **expr, int *invalidExprFlag)
{
    if (**expr == '\0')
        *invalidExprFlag = 1;
    if (*invalidExprFlag)
        return NULL;

    struct Tree *ast = (struct Tree *) calloc(1, sizeof(struct Tree));
    ast->value = **expr;

    if (isdigit(**expr))
        ast->left = ast->right = NULL;
    else {
        ++(*expr);
        ast->left = buildAST(expr, invalidExprFlag);
        ++(*expr);
        ast->right = buildAST(expr, invalidExprFlag);
    }

    return ast;
}

int evalAST(struct Tree *ast, int *zeroDivFlag)
{
    int lvalue;

    if (ast == NULL)
        return 0;

    if (isdigit(ast->value))
        return as_int(ast->value);

    switch (ast->value) {
        case '+':
            return evalAST(ast->right, zeroDivFlag) +
                   evalAST(ast->left, zeroDivFlag);
        case '-':
            return evalAST(ast->right, zeroDivFlag) -
                   evalAST(ast->left, zeroDivFlag);
        case '*':
            return evalAST(ast->right, zeroDivFlag) *
                   evalAST(ast->left, zeroDivFlag);
        case '/':
            lvalue = evalAST(ast->left, zeroDivFlag);
            if (!lvalue) {
                *zeroDivFlag = 1;
                return 0; // or any other value
            }
            return evalAST(ast->right, zeroDivFlag) / lvalue;
    }
}

int main()
{
    char line[2000002];

    while (fgets(line, 2000002, stdin) != NULL) {
        int answer, invalidExprFlag = 0, zeroDivFlag = 0;
        char expr[1000001];
        char *pIn, *pOut;
        struct Tree *ast;

        for (pIn = line, pOut = expr; *pIn != '\n'; ++pIn) {
            if (*pIn != ' ')
                *pOut++ = *pIn;
        }
        *pOut++ = '\0';

        if (!(strlen(expr) % 2))
            invalidExprFlag = 1;
        else {
            pOut = expr;
            ast = buildAST(&pOut, &invalidExprFlag);
            ++pOut;
        }

        if (invalidExprFlag || *pOut != '\0')
            puts("Invalid expression.");
        else {
            answer = evalAST(ast, &zeroDivFlag);

            if (zeroDivFlag)
                puts("Division by zero.");
            else
                printf("The answer is %d.\n", answer);
        }
    }

    return 0;
}
