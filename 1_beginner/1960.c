// https://www.urionlinejudge.com.br/judge/en/problems/view/1960

#include <stdio.h>

int main()
{
    int N, i;
    char roman[10];

    scanf("%d", &N);

    i = 0;
    while (N) {
        if (N >= 900) {
            roman[i++] = 'C';
            roman[i++] = 'M';
            N -= 900;
        } else if (N >= 500) {
            roman[i++] = 'D';
            N -= 500;
        } else if (N >= 400) {
            roman[i++] = 'C';
            roman[i++] = 'D';
            N -= 400;
        } else if (N >= 100) {
            roman[i++] = 'C';
            N -= 100;
        } else if (N >= 90) {
            roman[i++] = 'X';
            roman[i++] = 'C';
            N -= 90;
        } else if (N >= 50) {
            roman[i++] = 'L';
            N -= 50;
        } else if (N >= 40) {
            roman[i++] = 'X';
            roman[i++] = 'L';
            N -= 40;
        } else if (N >= 10) {
            roman[i++] = 'X';
            N -= 10;
        } else if (N >= 9) {
            roman[i++] = 'I';
            roman[i++] = 'X';
            N -= 9;
        } else if (N >= 5) {
            roman[i++] = 'V';
            N -= 5;
        } else if (N >= 4) {
            roman[i++] = 'I';
            roman[i++] = 'V';
            N -= 4;
        } else if (N >= 1) {
            roman[i++] = 'I';
            N -= 1;
        }
    }
    roman[i] = '\0';

    puts(roman);

    return 0;
}
