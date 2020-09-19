// https://www.urionlinejudge.com.br/judge/en/problems/view/2722

#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j, k;
    int len1, len2;
    char firstname[102], lastname[102], name[202];

    scanf("%d\n", &N);

    while (fgets(firstname, 101, stdin) != NULL) {
        fgets(lastname, 101, stdin);

        len1 = strlen(firstname);
        if (firstname[len1 - 1] == '\n')
            firstname[--len1] = '\0';

        len2 = strlen(lastname);
        if (lastname[len2 - 1] == '\n')
            lastname[--len2] = '\0';

        i = j = k = 0;

        while (i < len1 && j < len2) {
            name[k++] = firstname[i++];
            name[k++] = firstname[i++];
            name[k++] = lastname[j++];
            name[k++] = lastname[j++];
        }
        while (i < len1) {
            name[k++] = firstname[i++];
            name[k++] = firstname[i++];
        }
        while (j < len2) {
            name[k++] = lastname[j++];
            name[k++] = lastname[j++];
        }
        name[k] = '\0';

        puts(name);
    }

    return 0;
}
