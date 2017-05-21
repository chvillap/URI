// https://www.urionlinejudge.com.br/judge/en/problems/view/1211

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    size_t N;

    while (std::cin >> N) {
        std::string phones[100000];
        size_t digits, count = 0;

        for (size_t i = 0; i < N; ++i)
            std::cin >> phones[i];
        digits = phones[0].size();

        std::stable_sort(phones, phones + N);

        for (size_t i = 1; i < N; ++i) {
            for (size_t j = 0; j < digits; ++j) {
                if (phones[i - 1][j] == phones[i][j])
                    ++count;
                else
                    break;
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}
