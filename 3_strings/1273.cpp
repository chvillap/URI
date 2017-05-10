// https://www.urionlinejudge.com.br/judge/en/problems/view/1273

#include <iostream>
#include <iomanip>
#include <cstring>

int main()
{
    int N, len, maxLen;
    char words[50][51];

    std::cin >> N;

    while (true) {
        maxLen = 0;
        for (int i = 0; i < N; ++i) {
            std::cin >> words[i];

            len = strlen(words[i]);
            if (len > maxLen)
                maxLen = len;
        }

        for (int i = 0; i < N; ++i)
            std::cout << std::right << std::setw(maxLen) << words[i] << "\n";

        std::cin >> N;
        if (N)
            std::cout << "\n";
        else
            break;
    }

    return 0;
}
