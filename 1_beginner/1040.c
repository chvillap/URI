// https://www.urionlinejudge.com.br/judge/en/problems/view/1040

#include <stdio.h>

int main()
{
    double n1, n2, n3, n4, exam;
    double average;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    average = (2*n1 + 3*n2 + 4*n3 + n4) / 10.0;
    printf("Media: %.1lf\n", average);

    if (average >= 7.0)
        puts("Aluno aprovado.");
    else if (average < 5.0)
        puts("Aluno reprovado.");
    else {
        puts("Aluno em exame.");

        scanf("%lf", &exam);
        printf("Nota do exame: %.1lf\n", exam);

        average = (average + exam) / 2;

        if (average >= 5.0)
            puts("Aluno aprovado.");
        else
            puts("Aluno reprovado.");
        printf("Media final: %.1lf\n", average);
    }

    return 0;
}
