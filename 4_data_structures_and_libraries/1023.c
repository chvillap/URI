// https://www.urionlinejudge.com.br/judge/en/problems/view/1023

#include <stdio.h>

struct property_t {
    int residents;
    int consumption;
    int avgConsumption;
};

void countingSort(struct property_t *array, int size, int max)
{
    struct property_t copy[size];
    int i, freq[max + 1];

    for (i = 0; i < size; ++i)
        copy[i] = array[i];

    for (i = 0; i <= max; ++i)
        freq[i] = 0;

    for (i = 0; i < size; ++i)
        ++freq[copy[i].avgConsumption];

    for (i = 1; i <= max; ++i)
        freq[i] += freq[i - 1];

    for (i = size - 1; i >= 0; --i) {
        array[freq[copy[i].avgConsumption] - 1] = copy[i];
        --freq[i];
    }
}

int main()
{
    int N, cityNum = 0;

    scanf("%d", &N);

    while (1) {
        int i, totalResidents, totalConsumption;
        struct property_t city[1000000];

        for (i = 0; i < N; ++i) {
            scanf("%d%d", &city[i].residents, &city[i].consumption);
            city[i].avgConsumption = city[i].consumption / city[i].residents;
        }

        countingSort(city, N, 200);



        printf("Cidade# %d:\n", ++cityNum);

        printf("%d-%d", city[0].residents,
            city[0].consumption / city[0].residents);

        for (i = 1; i < N; ++i) {
            printf(" %d-%d", city[i].residents,
                city[i].consumption / city[i].residents);
        }

        printf("\nConsumo medio: %.2lf m3.\n",
            (double) totalConsumption / totalResidents);

        scanf("%d", &N);
        if (!N)
            break;
        else
            putchar('\n');
    }

    return 0;
}
