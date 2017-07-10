// https://www.urionlinejudge.com.br/judge/en/problems/view/1424

#include <iostream>
#include <vector>
#include <map>

int main()
{
    int n, m, k, v;

    while (std::cin >> n >> m) {
        std::map<int, std::vector<int> > positions;

        for (int i = 0; i < n; ++i) {
            std::cin >> v;
            positions[v].push_back(i + 1);
        }

        for (int i = 0; i < m; ++i) {
            std::cin >> k >> v;

            if (positions.find(v) == positions.end())
                std::cout << "0\n";
            else {
                std::vector<int> vec(positions[v]);
                if (vec.size() >= k)
                    std::cout << vec[k - 1] << "\n";
                else
                    std::cout << "0\n";
            }
        }
    }

    return 0;
}
