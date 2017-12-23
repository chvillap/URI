// https://www.urionlinejudge.com.br/judge/en/problems/view/1574

#include <stdio.h>
#include <string.h>

int execute(char instruction[13], int position, char (*history)[13])
{
    int i;
    char unused[5];

    if (!strcmp(instruction, "LEFT\n"))
        return position - 1;

    if (!strcmp(instruction, "RIGHT\n"))
        return position + 1;

    sscanf(instruction, "%s%s%d", unused, unused, &i);
    return execute(history[i - 1], position, history);
}

int main()
{
    int T;

    scanf("%d", &T);

    while (T > 0) {
        int n;
        int j, position = 0;
        char instruction[13], history[100][13];

        scanf("%d", &n);
        getchar();

        for (j = 0; j < n; ++j) {
            fgets(instruction, 13, stdin);

            position = execute(instruction, position, history);
            strcpy(history[j], instruction);
        }

        printf("%d\n", position);
        --T;
    }

    return 0;
}
