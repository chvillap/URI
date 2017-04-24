// https://www.urionlinejudge.com.br/judge/en/problems/view/1136

#include <iostream>
#include <algorithm>

int main()
{
    while (true) {
        int N, B;
        int balls[91], count = 1;

        std::cin >> N >> B;
        if (!N && !B)
            break;

        for (int b = 0; b < B; ++b)
            std::cin >> balls[b];

        std::stable_sort(balls, balls + B);

        for (int n = 1; n <= N; ++n) {
            for (int b = 0; b < B; ++b) {
                bool found = std::binary_search(balls, balls + B, balls[b] + n);
                if (found) {
                    ++count;
                    break;
                }
            }
        }
        if (count <= N)
            std::cout << "N\n";
        else
            std::cout << "Y\n";
    }

    return 0;
}

/*
#include <iostream>
#include <cstdlib>
#include <set>

int main()
{
    while (true) {
        int N, B;
        int balls[91], possible = 0;
        std::set<int> ballset;

        std::cin >> N >> B;
        if (!N && !B)
            break;

        for (int b = 0; b < B; ++b)
            std::cin >> balls[b];

        ballset.insert(0);

        for (int i = 0; i < B && !possible; ++i) {
            for (int j = i + 1; j < B && !possible; ++j) {
                ballset.insert(std::abs(balls[j] - balls[i]));

                if (ballset.size() == N + 1)
                    possible = 1;
            }
        }
        if (possible)
            std::cout << "Y\n";
        else
            std::cout << "N\n";
    }

    return 0;
}
*/
