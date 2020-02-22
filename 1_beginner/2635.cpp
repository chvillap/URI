// https://www.urionlinejudge.com.br/judge/en/problems/view/2635

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    int N, Q;
    int nwords, maxlength, count;
    std::string input, searched[10000];
    std::string *p;

    while (std::cin >> N) {
        nwords = 0;
        for (int i = 0; i < N; ++i) {
            std::cin >> input;
            searched[nwords++] = input;
        }

        std::sort(searched, searched + nwords);

        std::cin >> Q;

        for (int i = 0; i < Q; ++i) {
            count = maxlength = 0;
            std::cin >> input;

            p = std::lower_bound(searched, searched + nwords, input);

            while (p->find(input) != std::string::npos) {
                ++count;
                if (p->size() > maxlength)
                    maxlength = p->size();
                ++p;
            }

            if (count)
                std::cout << count << ' ' << maxlength << '\n';
            else
                std::cout << "-1\n";
        }
    }

    return 0;
}