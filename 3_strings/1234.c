// https://www.urionlinejudge.com.br/judge/en/problems/view/1234

#include <stdio.h>
#include <ctype.h>

int main()
{
    char sentence[52], *ptr;
    int previousWasUpperCase;

    while (fgets(sentence, 51, stdin)) {
        ptr = sentence;
        previousWasUpperCase = 0;

        while (*ptr != '\n') {
            if (isalpha(*ptr)) {
                if (previousWasUpperCase)
                    *ptr = tolower(*ptr);
                else
                    *ptr = toupper(*ptr);

                previousWasUpperCase = !previousWasUpperCase;
            }
            ++ptr;
        }
        printf("%s", sentence);
    }

    return 0;
}
