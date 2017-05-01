// https://www.urionlinejudge.com.br/judge/pt/problems/view/1209

#include <iostream>
#include <cstring>
#include <map>

int main()
{
    int N, M, K;

    while (std::cin >> N >> M >> K) {
        int graph[1001][1001];
        std::map<int, int> degrees;
        std::map<int, int>::iterator it;
        size_t num_keys_backup;

        memset(graph, 0, sizeof(graph));

        for (int i = 1; i <= N; ++i)
            degrees[i] = 0;

        for (int i = 0; i < M; ++i) {
            int x, y;

            std::cin >> x >> y;

            ++graph[x][y];
            ++graph[y][x];

            ++degrees[x];
            ++degrees[y];
        }

        do {
            num_keys_backup = degrees.size();

            for (it = degrees.begin(); it != degrees.end(); ) {
                if (it->second < K) {
                    memset(graph[it->first], 0, N * sizeof(int));
                    for (int i = 1; i <= N; ++i) {
                        if (graph[i][it->first]) {
                            --graph[i][it->first];
                            --degrees[i];
                        }
                    }
                    it = degrees.erase(it);
                }
                else
                    ++it;
            }
        } while (num_keys_backup != degrees.size());

        if (degrees.size()) {
            it = degrees.begin();
            for (size_t j = 0; j < degrees.size() - 1; ++j) {
                std::cout << it->first << " ";
                ++it;
            }
            std::cout << it->first << "\n";
        } else
            std::cout << "0\n";
    }

    return 0;
}
