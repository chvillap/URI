// https://www.urionlinejudge.com.br/judge/pt/problems/view/1063

#include <iostream>
#include <stack>
#include <queue>

int main()
{
    while (true) {
        int N;
        char wagon;
        std::queue<char> origin, expected;
        std::stack<char> station;
        bool impossible = false;

        std::cin >> N;
        if (!N)
            break;

        for (int i = 0; i < N; ++i) {
            std::cin >> wagon;
            std::cin.ignore();

            origin.push(wagon);
        }

        for (int i = 0; i < N; ++i) {
            std::cin >> wagon;
            std::cin.ignore();

            expected.push(wagon);
        }

        while (!expected.empty() && !impossible) {
            if (!station.empty() && station.top() == expected.front()) {
                station.pop();
                expected.pop();

                std::cout << 'R';
            } else if (!origin.empty()) {
                station.push(origin.front());
                origin.pop();
                std::cout << 'I';
            } else {
                impossible = true;
                std::cout << " Impossible";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
