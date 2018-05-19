// https://www.urionlinejudge.com.br/judge/en/problems/view/1578

#include <iostream>
#include <iomanip>

int numDigits(unsigned long long x)
{
    int result = 0;

    do {
        ++result;
        x /= 10;
    } while (x > 0);

    return result;
}

int main()
{
    int N;

    std::cin >> N;

    for (int n = 1; n <= N; ++n) {
        int M, i, j;
        int width[20];
        unsigned long long mat[20][20];

        std::cin >> M;

        for (i = 0; i < M; ++i) {
            for (j = 0; j < M; ++j) {
                std::cin >> mat[i][j];
                mat[i][j] *= mat[i][j];
            }
        }

        for (j = 0; j < M; ++j) {
            unsigned long long maxValue = 0;

            for (i = 0; i < M; ++i) {
                if (mat[i][j] > maxValue)
                    maxValue = mat[i][j];
            }
            width[j] = numDigits(maxValue);
        }

        if (n == 1)
            std::cout << "Quadrado da matriz #" << n + 3 << ":\n";
        else
            std::cout << "\nQuadrado da matriz #" << n + 3 << ":\n";

        for (i = 0; i < M; ++i) {
            std::cout << std::setw(width[0]) << mat[i][0];
            for (j = 1; j < M; ++j)
                std::cout << std::setw(1 + width[j]) << mat[i][j];
            std::cout << '\n';
        }
    }

    return 0;
}
