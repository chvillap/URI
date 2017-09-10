// https://www.urionlinejudge.com.br/judge/en/problems/view/1425

// This solution theoretically works, but it's too slow to be accepted (TLE).

#include <iostream>
#include <queue>
#include <utility>

int main()
{
    while (true) {
        int N, M;
        std::queue<std::pair<int, int> > q;

        std::cin >> N >> M;
        if (!N && !M)
            break;

        q.push(std::make_pair(2, 1));
        while (!q.empty()) {
            int i = q.front().first;
            int rock = q.front().second;

            if (rock == M)
                break;
            q.pop();

            int forward = rock + (2 * i - 1);
            int backward = rock - (2 * i - 1);

            if (forward > 0 && forward <= N)
                q.push(std::make_pair(i + 1, forward));
            if (backward > 0 && backward <= N)
                q.push(std::make_pair(i + 1, backward));
        }

        if (q.empty())
            std::cout << "Don't make fun of me!\n";
        else
            std::cout << "Let me try!\n";
    }

    return 0;
}
