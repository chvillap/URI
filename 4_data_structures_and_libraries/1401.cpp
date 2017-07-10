// https://www.urionlinejudge.com.br/judge/en/problems/view/1401

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int n;
    std::string s;

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> s;

        std::sort(s.begin(), s.end());
        do {
            std::cout << s << "\n";
        } while (std::next_permutation(s.begin(), s.end()));

        std::cout << "\n";
    }

    return 0;
}
