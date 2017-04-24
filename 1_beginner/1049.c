// https://www.urionlinejudge.com.br/judge/en/problems/view/1049

#include <stdio.h>
#include <string.h>

int main()
{
    char word1[15], word2[15], word3[15];

    scanf("%s\n%s\n%s", word1, word2, word3);

    if (!strcmp(word1, "vertebrado")) {
        if (!strcmp(word2, "ave")) {
            if (!strcmp(word3, "carnivoro"))
                puts("aguia");
            else /*if (!strcmp(word3, "onivoro"))*/
                puts("pomba");
        } else /*if (!strcmp(word2, "mamifero"))*/ {
            if (!strcmp(word3, "onivoro"))
                puts("homem");
            else /*if (!strcmp(word3, "herbivoro"))*/
                puts("vaca");
        }
    } else /*if (!strcmp(word1, "invertebrado"))*/ {
        if (!strcmp(word2, "inseto")) {
            if (!strcmp(word3, "hematofago"))
                puts("pulga");
            else /*if (!strcmp(word3, "herbivoro"))*/
                puts("lagarta");
        } else if (!strcmp(word2, "anelideo")) {
            if (!strcmp(word3, "hematofago"))
                puts("sanguessuga");
            else /*if (!strcmp(word3, "onivoro"))*/
                puts("minhoca");
        }
    }

    return 0;
}
