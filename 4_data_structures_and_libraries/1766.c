// https://www.urionlinejudge.com.br/judge/en/problems/view/1766

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct reindeer_t {
    char name[100];
    int weight, age;
    float height;
};

int compare(const void *p1, const void *p2)
{
    struct reindeer_t *r1 = (struct reindeer_t *) p1;
    struct reindeer_t *r2 = (struct reindeer_t *) p2;
    int result = r2->weight - r1->weight;

    if (!result)
        result = r1->age - r2->age;
    if (!result)
        result = r1->height - r2->height;
    if (!result)
        result = strcmp(r1->name, r2->name);

    return result;
}

int main()
{
    int T, N, M, i, j;
    struct reindeer_t R[1000];

    scanf("%d", &T);

    for (i = 1; i <= T; ++i) {
        scanf("%d%d", &N, &M);

        for (j = 0; j < N; ++j)
            scanf("%s%d%d%f", R[j].name, &R[j].weight, &R[j].age, &R[j].height);

        qsort(R, N, sizeof(struct reindeer_t), compare);

        printf("CENARIO {%d}\n", i);
        for (j = 0; j < M; ++j)
            printf("%d - %s\n", j + 1, R[j].name);
    }

    return 0;
}
