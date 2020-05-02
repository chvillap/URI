// https://www.urionlinejudge.com.br/judge/en/problems/view/2763

#include <stdio.h>
#include <string.h>

int main()
{
    char cpf[15], *ptr;
    
    scanf("%s", cpf);

    ptr = strtok(cpf, ".-");
    do {
        puts(ptr);
    } while ((ptr = strtok(NULL, ".-")) != NULL);

    return 0;
}
