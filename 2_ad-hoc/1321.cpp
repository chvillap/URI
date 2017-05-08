// https://www.urionlinejudge.com.br/judge/en/problems/view/1321

#include <iostream>
#include <vector>
#include <cstring>

int main()
{
    while (true) {
        int a, b, c, x, y, i;
        bool available[53];
        std::vector<int> princess(3, 0), prince(2, 0);

        std::cin >> a >> b >> c >> x >> y;

        if (!a && !b && !c && !x && !y)
            break;

        memset(available, true, sizeof(available));
        available[a] = available[b] = available[c] =
        available[x] = available[y] = available[0] = false;

        princess[0] = std::min(a, std::min(b, c));
        princess[2] = std::max(a, std::max(b, c));
        princess[1] = a + b + c - princess[0] - princess[2];

        prince[0] = std::min(x, y);
        prince[1] = std::max(x, y);

        for (i = 0; i < 3; ++i) {
            if (princess[i] > prince[0]) {
                princess.erase(princess.begin() + i);
                prince.erase(prince.begin());
                break;
            }
        }

        if (princess.size() == 3)
            i = 1;
        else
            i = princess[1] + 1;

        if (princess[1] > prince[0])
            std::cout << "-1\n";
        else {
            while (i <= 52 && !available[i])
                ++i;

            if (i > 52)
                std::cout << "-1\n";
            else
                std::cout << i << "\n";
        }
    }

    return 0;
}
