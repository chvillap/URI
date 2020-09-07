// https://www.urionlinejudge.com.br/judge/en/problems/view/2815

#include <stdio.h>
#include <string.h>

int main()
{
    char input[15002], output[15001], *word;
    int input_len, word_len, output_len;

    fgets(input, 15001, stdin);

    input_len = strlen(input);
    input[input_len - 1] = '\0';

    output[0] = '\0';
    output_len = 0;

    word = strtok(input, " ");
    while (word) {
        word_len = strlen(word);

        if (word_len >= 4 && !strncmp(word, word + 2, 2)) {
            strcat(output, word + 2);
            output_len += word_len - 2;
        } else {
            strcat(output, word);
            output_len += word_len;
        }

        word = strtok(NULL, " ");

        if (word) {
            output[output_len++] = ' ';
            output[output_len] = '\0';
        }
    }

    puts(output);

    return 0;
}
