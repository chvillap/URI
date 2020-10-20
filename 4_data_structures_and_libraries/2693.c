// https://www.urionlinejudge.com.br/judge/en/problems/view/2693

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_t
{
    char name[100];
    char region;
    int cost;
};

int compare(void const *p1, void const *p2)
{
    int result;
    struct student_t *s1 = (struct student_t *) p1;
    struct student_t *s2 = (struct student_t *) p2;

    result = s1->cost - s2->cost;
    if (!result)
        result = s1->region - s2->region;
    if (!result)
        result = strcmp(s1->name, s2->name);

    return result;
}

int main()
{
    int Q, i;
    struct student_t stud[10000];

    while (scanf("%d", &Q) != EOF) {
        for (i = 0; i < Q; ++i)
            scanf("%s %c %d", stud[i].name, &stud[i].region, &stud[i].cost);

        qsort(stud, Q, sizeof(struct student_t), compare);

        for (i = 0; i < Q; ++i)
            printf("%s\n", stud[i].name);
    }

    return 0;
}
