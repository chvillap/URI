// https://www.beecrowd.com.br/judge/en/problems/view/1986

#include <stdio.h>

int main() {
    int n, i, hex;
    char message[101];

    scanf("%d", &n);

    i = 0;
    while (n) {
        scanf("%x", &hex);
        message[i++] = (char) hex;        
        --n;
    }
    message[i] = '\0';
    puts(message);

    return 0;
}
