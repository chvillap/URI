// https://www.urionlinejudge.com.br/judge/en/problems/view/2703

#include <iostream>

int mst_cost(graph, int u, int v)
{
}

int main()
{
    int N, R;
    int A, B, C;
    int Q, U, V;

    std::cin >> N >> R;

    for (int r = 0; r < R; ++r) {
        std::cin >> A >> B >> C;

        // ...
    }

    std::cin >> Q;

    for (int q = 0; q < Q; ++q) {
        std::cin >> U >> V;
        std::cout << mst_cost(graph, U, V) << '\n';
    }

    return 0;
}
