// https://www.urionlinejudge.com.br/judge/en/problems/view/2061

#include <stdio.h>

int main()
{
    int initTabs, numActions;
    int i, tabs;

    scanf("%d %d", &initTabs, &numActions);

    tabs = initTabs;

    for (i = 0; i < numActions; ++i) {
        char action[7];

        scanf("%s", action);

        if (action[0] == 'f')
            tabs += 1;
        else if (action[0] == 'c')
            tabs -= 1;
    }

    printf("%d\n", tabs);

    return 0;
}
