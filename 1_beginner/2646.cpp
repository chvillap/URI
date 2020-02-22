// https://www.urionlinejudge.com.br/judge/en/problems/view/2646

#include <iostream>
#include <cstring>
#include <list>

std::list<int> G[26];

inline int id(char c)
{
    return c - 'a';
}

bool match(char *p1, char *p2)
{
    int a, b;
    bool checked[26];
    std::list<int> Q;
    std::list<int>::iterator it;

    if (*p1 == '\0')
        return true;

    memset(checked, false, sizeof(checked));

    a = id(*p1);
    b = id(*p2);

    Q.push_back(a);
    checked[a] = true;

    while (!Q.empty()) {
        a = Q.front();
        Q.pop_front();

        if (a == b) {
            if (match(p1 + 1, p2 + 1))
                return true;
        }

        for (it = G[a].begin(); it != G[a].end(); ++it) {
            if (*it == b) {
                if (match(p1 + 1, p2 + 1))
                    return true;
            } else if (!checked[*it]) {
                Q.push_back(*it);
                checked[*it] = true;
            }
        }
    }

    return false;
}

int main()
{
    int m, n;
    char a, b, w1[51], w2[51];
    char *p1, *p2;

    std::cin >> m >> n;

    for (int k = 0; k < m; ++k) {
        std::cin >> a >> b;
        G[id(a)].push_back(id(b));
    }

    for (int k = 0; k < n; ++k) {
        std::cin >> w1 >> w2;

        p1 = w1;
        p2 = w2;
        if (strlen(w1) != strlen(w2) || !match(p1, p2))
            std::cout << "no\n";
        else
            std::cout << "yes\n";
    }

    return 0;
}
