// https://www.urionlinejudge.com.br/judge/en/problems/view/2687

#include <iostream>
#include <iomanip>
#include <cstring>
#include <utility>
#include <list>

int main()
{
    int Q, L;

    std::cin >> Q;

    while (Q) {
        double perimeter, area, ext_area;
        int i0, j0, i1, j1, G[16][16];
        bool checked[16][16];
        std::list<std::pair<int, int> > S;

        std::cin >> L;

        memset(G, 0, sizeof(G));
        memset(checked, 0, sizeof(checked));

        for (int i = 1; i <= L; ++i)
            for (int j = 1; j <= L; ++j) {
                std::cin >> G[i][j];

                if (G[i][j] == 0) {
                    i0 = i;
                    j0 = j;
                } else {
                    i1 = i;
                    j1 = j;
                }
            }

        perimeter = 0.0;

        S.push_back(std::make_pair(i1, j1));
        checked[i1][j1] = true;

        while (!S.empty()) {
            i1 = S.front().first;
            j1 = S.front().second;

            perimeter += 1.0;
            S.pop_front();

            for (int i = i1 - 1; i <= i1 + 1; ++i)
                for (int j = j1 - 1; j <= j1 + 1; ++j) {
                    if (!checked[i][j] && G[i][j] == 1) {
                        S.push_back(std::make_pair(i, j));
                        checked[i][j] = true;
                    }
                }
        }

        ext_area = 0.0;

        S.push_back(std::make_pair(i0, j0));
        checked[i0][j0] = true;

        while (!S.empty()) {
            i0 = S.front().first;
            j0 = S.front().second;

            ext_area += 1.0;
            S.pop_front();

            if (i0 > 0 && !checked[i0 - 1][j0] && G[i0 - 1][j0] == 0) {
                S.push_back(std::make_pair(i0 - 1, j0));
                checked[i0 - 1][j0] = true;
            }
            if (i0 <= L && !checked[i0 + 1][j0] && G[i0 + 1][j0] == 0) {
                S.push_back(std::make_pair(i0 + 1, j0));
                checked[i0 + 1][j0] = true;
            }
            if (j0 > 0 && !checked[i0][j0 - 1] && G[i0][j0 - 1] == 0) {
                S.push_back(std::make_pair(i0, j0 - 1));
                checked[i0][j0 - 1] = true;
            }
            if (j0 <= L && !checked[i0][j0 + 1] && G[i0][j0 + 1] == 0) {
                S.push_back(std::make_pair(i0, j0 + 1));
                checked[i0][j0 + 1] = true;
            }
        }

        area = (L + 2)*(L + 2) - ext_area - perimeter;
        std::cout << std::fixed << std::setprecision(2)
                  << 0.5 * (perimeter + area) << "\n";

        --Q;
    }

    return 0;
}