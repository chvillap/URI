// https://www.urionlinejudge.com.br/judge/en/problems/view/1042

#include <stdio.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int n1, n2, n3;
    int s1, s2, s3;

    scanf("%d %d %d", &n1, &n2, &n3);

    s1 = MIN(n1, MIN(n2, n3));
    s3 = MAX(n1, MAX(n2, n3));
    s2 = n1 + n2 + n3 - s1 - s3;

    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", s1, s2, s3, n1, n2, n3);

    return 0;
}
