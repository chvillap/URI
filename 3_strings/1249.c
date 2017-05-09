// https://www.urionlinejudge.com.br/judge/en/problems/view/1249

#include <stdio.h>
#include <ctype.h>

int main()
{
    char message[52], *ptrIn;
    char encoded[52], *ptrOut;
    int begin;

    while (fgets(message, 52, stdin)) {
        ptrIn = message;
        ptrOut = encoded;

        while (*ptrIn != '\n') {
            if (isupper(*ptrIn))
                begin = 'A';
            else
                begin = 'a';

            if (isalpha(*ptrIn))
                *ptrOut = (*ptrIn - begin + 13) % 26 + begin;
            else
                *ptrOut = *ptrIn;

            ++ptrIn;
            ++ptrOut;
        }
        *ptrOut = '\0';

        puts(encoded);
    }

    return 0;
}
