// https://www.urionlinejudge.com.br/judge/en/problems/view/1259

#include <stdio.h>
#include <stdlib.h>

int compEven(const void *p1, const void *p2)
{
    return *((const int*) p1) - *((const int*) p2);
}

int compOdd(const void *p1, const void *p2)
{
    return *((const int*) p2) - *((const int*) p1);
}

int main()
{
    int N, i;
    int num, ne = 0, no = 0;
    int even[100000], odd[100000];

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%d", &num);

        if (num % 2)
            odd[no++] = num;
        else
            even[ne++] = num;
    }

    qsort(even, ne, sizeof(int), compEven);
    qsort(odd, no, sizeof(int), compOdd);

    for (i = 0; i < ne; ++i)
        printf("%d\n", even[i]);
    for (i = 0; i < no; ++i)
        printf("%d\n", odd[i]);

    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

int compare(const void *p1, const void *p2)
{
    return *((const int*) p1) - *((const int*) p2);
}

int main()
{
    int N, i;
    int nums[100000];
    int odds = 0;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%d", &nums[i]);

        if (nums[i] % 2) {
            nums[i] *= -1;
            ++odds;
        }
    }

    qsort(nums, N, sizeof(int), compare);

    for (i = odds; i < N; ++i)
        printf("%d\n", nums[i]);
    for (i = 0; i < odds; ++i)
        printf("%d\n", -nums[i]);

    return 0;
}
*/
