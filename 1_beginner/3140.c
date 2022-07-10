// https://www.beecrowd.com.br/judge/en/problems/view/3140

#include <stdio.h>
#include <string.h>

int main() {
    char line[1002], *p;
    int body = 0;

    while (fgets(line, 1002, stdin) != NULL) {
        if (body) {
            p = strstr(line, "</body>");
            if (p != NULL) {
                *p = '\0';
                body = 0;
            } else
                printf("%s", line);
        } else {
            p = strstr(line, "<body>");
            if (p != NULL)
                body = 1;
        }            
    }

    return 0;
}
