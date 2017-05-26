// https://www.urionlinejudge.com.br/judge/en/problems/view/1256

#include <iostream>
#include <list>

int main()
{
    int N;
    bool first = true;

    std::cin >> N;

    for (; N > 0; --N) {
        int M, C;
        std::list<int> htable[100];

        std::cin >> M >> C;

        for (int i = 0; i < C; ++i) {
            int key;
            std::cin >> key;

            htable[key % M].push_back(key);
        }

        if (!first)
            std::cout << "\n";

        for (int i = 0; i < M; ++i) {
            std::list<int>::iterator it;

            std::cout << i << " -> ";
            for (it = htable[i].begin(); it != htable[i].end(); ++it)
                std::cout << *it << " -> ";
            std::cout << "\\\n";
        }

        first = false;
    }

    return 0;
}
