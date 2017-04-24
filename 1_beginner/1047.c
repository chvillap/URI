// https://www.urionlinejudge.com.br/judge/en/problems/view/1047

#include <stdio.h>

int main()
{
    int initHour, finalHour;
    int initMinute, finalMinute;
    int initTime, finalTime;
    int elapsedTime, hours, minutes;

    scanf("%d %d %d %d", &initHour, &initMinute, &finalHour, &finalMinute);

    initTime = initHour * 60 + initMinute;
    finalTime = finalHour * 60 + finalMinute;
    elapsedTime = finalTime - initTime + (finalTime <= initTime) * 1440;

    hours = elapsedTime / 60;
    minutes = elapsedTime % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
