// https://www.urionlinejudge.com.br/judge/en/problems/view/1278

#include <iostream>
#include <iomanip>
#include <cstring>

char* trim(char *str)
{
    char *lp = str;
    char *rp = str + strlen(str) - 1;

    while (*lp == ' ')
        ++lp;

    while (*rp == ' ')
        --rp;
    *(++rp) = '\0';

    return lp;
}

int shorten(char *in, char *out)
{
    int len1 = strlen(in);
    int len2 = 0;

    for (int i = 0; i < len1; ++i) {
        if (i && in[i] == ' ' && in[i-1] == ' ')
            continue;
            
        out[len2++] = in[i];
    }
    out[len2] = '\0';

    return len2;
}

int main()
{
    int N;    
    int len, maxlen;
    char line[51], str[100][51];

    std::cin >> N;

    while (true) {
        std::cin.get();

        maxlen = -1;
        for (int i = 0; i < N; ++i) {
            std::cin.getline(line, 51);

            len = shorten(trim(line), str[i]);
            if (len > maxlen)
                maxlen = len;
        }

        for (int i = 0; i < N; ++i)
            std::cout << std::right << std::setw(maxlen) << str[i] << "\n";

        std::cin >> N;
        if (N)
            std::cout << "\n";
        else
            break;
    }

    return 0;
}
