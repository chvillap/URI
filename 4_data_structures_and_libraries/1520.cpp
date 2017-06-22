// https://www.urionlinejudge.com.br/judge/en/problems/view/1520

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;

    while (std::cin >> N) {
        int X, Y, num;
        std::vector<int> vec;
        std::vector<int>::iterator low, up;

        vec.reserve(100000);

        for (int n = 0; n < N; ++n) {
            std::cin >> X >> Y;

            for (int i = X; i <= Y; ++i)
                vec.push_back(i);
        }

        std::cin >> num;

        std::sort(vec.begin(), vec.end());
        low = std::lower_bound(vec.begin(), vec.end(), num);
        up = std::upper_bound(vec.begin(), vec.end(), num);

        if (*low != num)
            std::cout << num << " not found\n";
        else {
            std::cout << num << " found from "
                      << low - vec.begin() << " to "
                      << up - vec.begin() - 1 << "\n";
        }
    }

    return 0;
}
