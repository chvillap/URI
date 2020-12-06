// https://www.urionlinejudge.com.br/judge/en/problems/view/1704

#include <stdio.h>
#include <stdlib.h>

struct task_t {
    int v, t;
};

int compare(const void *p1, const void *p2)
{
    struct task_t *t1 = (struct task_t *) p1;
    struct task_t *t2 = (struct task_t *) p2;

    if (t1->t == t2->t)
        return t2->v - t1->v;
    return t1->t - t2->t;
}

int compare_t(struct task_t t1, struct task_t t2)
{
    if (t1.t == t2.t)
        return t2.v - t1.v;
    return t1.t - t2.t;
}

int sort_elem(struct task_t tasks[], int i)
{
    int j = i - 1;
    struct task_t aux = tasks[i];

    while (j >= 0 && compare_t(aux, tasks[j]) < 0) {
        tasks[j + 1] = tasks[j];
        --j;
    }
    tasks[j + 1] = aux;
    return j + 1;
}

int main()
{
    int N, H, i, j, total_v, earned_v;
    struct task_t aux, tasks[10001];

    while (scanf("%d%d", &N, &H) != EOF) {
        total_v = earned_v = 0;

        for (i = 0; i < N; ++i) {
            scanf("%d%d", &tasks[i].v, &tasks[i].t);
            total_v += tasks[i].v;
        }

        qsort(tasks, N, sizeof(struct task_t), compare);

        i = N - 1;
        while (tasks[i].t > 1) {
            j = i;
            while (tasks[j].t > 1 && tasks[j].t == tasks[j - 1].t) {
                --tasks[j].t;
                j = sort_elem(tasks, j);
            }
            if (j == i)
                --i;
        }

        for (i = 0, j = 1; i < N && j <= H; ++i) {
            if (tasks[i].t >= j) {
                earned_v += tasks[i].v;
                ++j;
            }
        }

        printf("%d\n", total_v - earned_v);
    }

    return 0;
}
