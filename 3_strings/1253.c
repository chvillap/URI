// https://www.urionlinejudge.com.br/judge/en/problems/view/1253

#include <stdio.h>

int main()
{
    int N, shift, charCode;
    char sentence[51], *ptrIn;
    char decoded[51], *ptrOut;

    scanf("%d", &N);

    for (; N > 0; --N) {
        scanf("%s", sentence);
        scanf("%d", &shift);

        ptrIn = sentence;
        ptrOut = decoded;

        while (*ptrIn != '\0') {
            int charCode = *ptrIn - 'A';
            *ptrOut = ((charCode - shift) % 26 + 26) % 26 + 'A';

            ++ptrIn;
            ++ptrOut;
        }
        *ptrOut = '\0';

        puts(decoded);
    }

    return 0;
}
